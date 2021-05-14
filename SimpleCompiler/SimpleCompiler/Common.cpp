#include "Common.h"
#include "Node.h"
#include <cstdarg>

string vtype_to_string(VType type) {
    if (type == VType::INT)
        return "int";
    if (type == VType::FLOAT)
        return "float";
    return "void";
}

CompileManager::CompileManager()
{
    this->identifierMap.insert(pair<string, int>("!0", 0));
    this->identifierMap.insert(pair<string, int>("!1", 1));
    this->identifierMap.insert(pair<string, int>("!2", 2));

    this->identifiers.push_back("!0");
    this->identifiers.push_back("!1");
    this->identifiers.push_back("!2");
}

CompileManager::~CompileManager()
{
    if (this->flag) {
        cout << "Compile Success!" << endl;
    }
    else {
        cout << "Compile Failed!" << endl;
    }
}

int CompileManager::AddIdentifier(char* id)
{
    string name = string(id);

    if (this->identifierMap.find(name) == this->identifierMap.end()) {
        this->identifierMap.insert(pair<string, int>(name, this->identifierMap.size()));
        this->identifiers.push_back(name);
    }

    return this->identifierMap[name];
}

void CompileManager::AddFunction(int nameIndex, int type)
{
    this->currentFunction = this->identifiers[nameIndex];
    if (this->functions.find(this->currentFunction) != this->functions.end()) {
        string error = "duplicate definition of function : " + this->currentFunction;
        yyerror((char*)(error.c_str()));
        this->currentFunction = "global";
    }
    else {
        this->functions.insert(pair<string, Function>(this->currentFunction, Function(this->currentFunction, (VType)type)));
    }
}

void CompileManager::AddParam(int nameIndex, int type)
{
    this->functions[this->currentFunction].AddParam(VType(type), this->identifiers[nameIndex]);
}

void CompileManager::AddLocalVariable(int nameIndex)
{
    auto& func = this->functions[this->currentFunction];
    if (func.GetLocal(this->identifiers[nameIndex]) != -1) {
        string error = "duplicate definition of local variable : " + this->identifiers[nameIndex];
        yyerror((char*)(error.c_str()));
    }
    else {
        func.AddLocal(this->identifiers[nameIndex], this->currentType);
    }
}

void CompileManager::AddGVar(int nameIndex, Node* value)
{
    this->currentGVars.push_back(GVar{ nameIndex, value });
}

void CompileManager::SetGVarType(int type)
{
    for (auto g : this->currentGVars) {
        this->AddGlobalVariable(g.nameIndex, g.value, type);
    }
    this->currentGVars.clear();
}

void CompileManager::AddGlobalVariable(int nameIndex, Node* value, int type)
{
    if (this->globals.find(this->identifiers[nameIndex]) != this->globals.end()) {
        string error = "duplicate definition of global variable : " + this->identifiers[nameIndex];
        yyerror((char*)(error.c_str()));
    }
    else {
        int index = this->globals.size();
        VType t = VType(type);
        this->globals.insert(pair<string, int>(this->identifiers[nameIndex], this->globals.size()));
        
        this->globalTypes.push_back(t);

        if (value != NULL) {
            if (value->GetType() == NodeType::INTEGER) {
                if (t == VType::FLOAT) {
                    fprintf(yyout, "global(#%d) %s : %s(%f)\n", index, this->identifiers[nameIndex].c_str(), vtype_to_string(t).c_str(), (float)((IntNode*)value)->GetValue());
                }
                else {
                    fprintf(yyout, "global(#%d) %s : %s(%d)\n", index, this->identifiers[nameIndex].c_str(), vtype_to_string(t).c_str(), ((IntNode*)value)->GetValue());
                }
            }
            else {
                if (t == VType::FLOAT) {
                    fprintf(yyout, "global(#%d) %s : %s(%f)\n", index, this->identifiers[nameIndex].c_str(), vtype_to_string(t).c_str(), ((FloatNode*)value)->GetValue());
                }
                else {
                    fprintf(yyout, "global(#%d) %s : %s(%d)\n", index, this->identifiers[nameIndex].c_str(), vtype_to_string(t).c_str(), (int)((FloatNode*)value)->GetValue());
                }
            }
        }
        else {
            if (t == VType::FLOAT) {
                fprintf(yyout, "global(#%d) %s : %s(%f)\n", index, this->identifiers[nameIndex].c_str(), vtype_to_string(t).c_str(), 0.0f);
            }
            else {
                fprintf(yyout, "global(#%d) %s : %s(%d)\n", index, this->identifiers[nameIndex].c_str(), vtype_to_string(t).c_str(), 0);
            }
        }
    }
}

void CompileManager::CompleteFunction()
{
    auto &func = this->functions[this->currentFunction];

    func.PrintDescription();

    this->currentFunction = "global";
}

void CompileManager::SetCurrentType(int type)
{
    this->currentType = (VType)type;
}

void CompileManager::SetFlag(bool flag)
{
    this->flag = flag;
}

VarNode* CompileManager::GetVarNode(int nameIndex)
{
    auto varName = this->identifiers[nameIndex];
    auto& func = this->functions[this->currentFunction];
    
    int indexL = func.GetLocal(varName);
    if (indexL == -1) {
        if (this->globals.find(varName) == this->globals.end()) {
            string error = "unidentified variable : " + varName;
            yyerror((char*)(error.c_str()));
            return new VarNode(-1, false, VType::VOID);
        }
        indexL = this->globals[varName];
        return new VarNode(indexL, false, this->globalTypes[indexL]);
    }
    return new VarNode(indexL, true, func.GetLocalType(indexL));
}

ConnNode* CompileManager::GetConnNode(int count, ...)
{
    auto res = new ConnNode();

    va_list ap;
    va_start(ap, count);

    for (int i = 0; i < count; i++) {
        res->AddOpreand(va_arg(ap, Node*));
    }

    return res;
}

WhileNode* CompileManager::GetWhile(Node* expr, Node* stmt)
{
    auto res = new WhileNode(this->lbl);
    this->lbl += 2;
    res->AddOpreand(expr);
    res->AddOpreand(stmt);

    return res;
}

IfNode* CompileManager::GetIf(Node* expr, Node* stmt1, Node* stmt2)
{
    auto res = new IfNode(this->lbl);
    this->lbl += 2;
    res->AddOpreand(expr);
    res->AddOpreand(stmt1);
    res->AddOpreand(stmt2);

    return res;
}

IfNode* CompileManager::GetIf(Node* expr, Node* stmt)
{
    auto res = new IfNode(this->lbl);
    this->lbl++;
    res->AddOpreand(expr);
    res->AddOpreand(stmt);

    return res;
}

FuncNode* CompileManager::GetFunc(Node* args, int nameIndex)
{
    if (this->functions.find(this->identifiers[nameIndex]) == this->functions.end()) {
        string error = "unidentified function : " + this->identifiers[nameIndex];
        yyerror((char*)(error.c_str()));
        return new FuncNode(args, string("error_func"), false);
    }
    auto& func = this->functions[this->identifiers[nameIndex]];

    return new FuncNode(args, func.GetName(), func.GetReturnType() != VType::VOID);
}

bool CompileManager::GetFlag()
{
    return this->flag;
}

Function::Function(string& name, VType returnType)
{
    this->name = name;
    this->returnType = returnType;
}

void Function::AddParam(VType type, string& name)
{
    if (this->GetLocal(name) != -1) {
        string error = "duplicate definition of param : " + name;
        yyerror((char*)(error.c_str()));
    }
    else {
        params.push_back(type);
        this->AddLocal(name, type);
    }
}

int Function::GetLocal(string& name)
{
    if (this->locals.find(name) != this->locals.end()) {
        return this->locals[name];
    }
    return -1;
}

VType Function::GetLocalType(int index)
{
    return this->localTypes[index];
}

void Function::AddLocal(string& name, VType type)
{
    this->locals.insert(pair<string, int>(name, locals.size()));
    this->localTypes.push_back(type);
}

void Function::PrintDescription()
{
    string des = "\nfunction " + this->name + " : " + vtype_to_string(this->returnType) + " (";
    if (this->params.size() > 0) {
        des.append(vtype_to_string(this->params[0]));
        for (int i = 1; i < this->params.size(); i++) {
            des.append(", " + vtype_to_string(this->params[i]));
        }
    }
    des.append(")\n");
    des.append("local: " + to_string(this->locals.size()) + " (");
    if (this->localTypes.size() > 0) {
        des.append( vtype_to_string(localTypes[0]));
        for (int i = 1; i < localTypes.size(); i++) {
            des.append(", " + vtype_to_string(localTypes[i]));
        }
    }
    des.append(")\n");
    fprintf(yyout, "%s", des.c_str());
}

string& Function::GetName()
{
    return this->name;
}

VType Function::GetReturnType()
{
    return this->returnType;
}
