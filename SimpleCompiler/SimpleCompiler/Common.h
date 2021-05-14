#pragma once
#include "Node.h"
#include <map>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

extern void yyerror(char* s);

enum class NodeType
{
	INTEGER,
	FLOAT,
	VAR,
	OPERATION
};

enum class OpType {
	OP_WHILE,
	OP_IF,
	OP_PRINT,
	OP_ASSIGN,
	OP_NEG,
	OP_ADD,
	OP_SUB,
	OP_MUL,
	OP_DIV,
	OP_MOD,
	OP_LT,
	OP_GT,
	OP_LE,
	OP_GE,
	OP_NE,
	OP_EQ,
	OP_CONN,
	OP_ARG,
	OP_RETURN,
	OP_FUNC
};

enum class VType {
	INT,
	FLOAT,
	VOID
};

struct GVar {
	int nameIndex;
	Node* value;
};

class Function {
public:
	Function() { name = ""; returnType = VType::INT; }
	Function(string& name, VType returnType);
	void AddParam(VType type, string& name);
	int GetLocal(string& name);
	VType GetLocalType(int index);
	void AddLocal(string& name, VType type);
	void PrintDescription();
	string& GetName();
	VType GetReturnType();

	void Debug() {
		cout << this->name << " : " << (int)this->returnType << endl;
		cout << "params: " << this->params.size() << endl;
		cout << "locals: " << this->locals.size() << endl;
	}

private:
	string name;
	VType returnType;
	vector<VType> params;
	vector<VType> localTypes;
	map<string, int> locals;
};

class CompileManager {
public:
	CompileManager();
	virtual ~CompileManager();

	int AddIdentifier(char* id);
	void AddFunction(int nameIndex, int type);
	void AddParam(int nameIndex, int type);
	void AddLocalVariable(int nameIndex);
	void AddGVar(int nameIndex, Node* value);
	void SetGVarType(int type);
	void AddGlobalVariable(int nameIndex, Node* value, int type);
	void CompleteFunction();
	void SetCurrentType(int type);
	void SetFlag(bool flag);

	VarNode* GetVarNode(int nameIndex);
	ConnNode* GetConnNode(int count, ...);
	WhileNode* GetWhile(Node* expr, Node* stmt);
	IfNode* GetIf(Node* expr, Node* stmt1, Node* stmt2);
	IfNode* GetIf(Node* expr, Node* stmt);
	FuncNode* GetFunc(Node* args, int nameIndex);
	bool GetFlag();

	void Debug() {
		for (auto func : functions) {
			func.second.Debug();
			cout << "\n";
		}
	}

	static CompileManager* GetInstance() {
		static CompileManager instance;
		return &instance;
	}

private:
	map<string, int> identifierMap;
	vector<string> identifiers;
	map<string, Function> functions;
	string currentFunction = "global";
	map<string, int> globals;
	vector<VType> globalTypes;
	int lbl = 0;
	VType currentType = VType::INT;
	bool flag = true;
	vector<GVar> currentGVars;
};