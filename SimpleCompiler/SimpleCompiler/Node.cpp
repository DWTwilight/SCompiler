#include "Node.h"
#include <stdio.h>
#include "Common.h"
#include <iostream>

Node::Node(NodeType type)
{
	this->type = type;
}

NodeType Node::GetType()
{
	return this->type;
}

IntNode::IntNode(int value) : Node(NodeType::INTEGER)
{
	this->value = value;
}

int IntNode::Translate()
{
	fprintf(yyout, "\t\tipush\t%d\n", this->value);
	return 0;
}

int IntNode::GetValue()
{
	return this->value;
}

VarNode::VarNode(int index, bool local, VType type) : Node(NodeType::VAR)
{
	this->index = index;
	this->local = local;
	this->type = type;
}

int VarNode::Translate()
{
	if (this->local) {
		if (this->type == VType::FLOAT) {
			fprintf(yyout, "\t\tfload_l\t%d\n", this->index);
		}
		else {
			fprintf(yyout, "\t\tiload_l\t%d\n", this->index);
		}
	}
	else {
		if (this->type == VType::FLOAT) {
			fprintf(yyout, "\t\tfload_g\t%d\n", this->index);
		}
		else {
			fprintf(yyout, "\t\tiload_g\t%d\n", this->index);
		}
	}

	return 0;
}

int VarNode::GetIndex()
{
	return this->index;
}

bool VarNode::IsLocal()
{
	return this->local;
}

VType VarNode::GetType()
{
	return this->type;
}

OpNode::OpNode(OpType type) : Node(NodeType::OPERATION)
{
	this->opType = type;
}

OpNode::~OpNode()
{
	for (auto n : this->operands) {
		delete n;
	}
}

OpType OpNode::GetType()
{
	return this->opType;
}

void OpNode::AddOpreand(Node* n)
{
	if (n != NULL) {
		this->operands.push_back(n);
	}
}

WhileNode::WhileNode(int lbl) : OpNode(OpType::OP_WHILE)
{
	this->lable1 = lbl;
	this->lable2 = lbl + 1;
}

int WhileNode::Translate()
{
	fprintf(yyout, "\tL%03d:\n", this->lable1);
	this->operands[0]->Translate();
	fprintf(yyout, "\t\tjz\tL%03d\n", this->lable2);
	this->operands[1]->Translate();
	fprintf(yyout, "\t\tjmp\tL%03d\n", this->lable1);
	fprintf(yyout, "\tL%03d:\n", this->lable2);

	return 0;
}

IfNode::IfNode(int lbl) : OpNode(OpType::OP_IF)
{
	this->lable1 = lbl;
	this->lable2 = lbl + 1;
}

int IfNode::Translate()
{
	this->operands[0]->Translate();
	if (this->operands.size() == 2) {
		//If
		fprintf(yyout, "\t\tjz\tL%03d\n", this->lable1);
		this->operands[1]->Translate();
		fprintf(yyout, "\tL%03d:\n", this->lable1);
	}
	else {
		//If-Else
		fprintf(yyout, "\t\tjz\tL%03d\n", this->lable1);
		this->operands[1]->Translate();
		fprintf(yyout, "\t\tjmp\tL%03d\n", this->lable2);
		fprintf(yyout, "\tL%03d:\n", this->lable1);
		this->operands[2]->Translate();
		fprintf(yyout, "\tL%03d:\n", this->lable2);
	}

	return 0;
}

PrintNode::PrintNode(Node* node) : OpNode(OpType::OP_PRINT)
{
	this->AddOpreand(node);
}

int PrintNode::Translate()
{
	this->operands[0]->Translate();
	fprintf(yyout, "\t\tprint\n");
	return 0;
}

AssignNode::AssignNode(VarNode* var, Node* expr) : OpNode(OpType::OP_ASSIGN)
{
	this->AddOpreand(var);
	this->AddOpreand(expr);
}

int AssignNode::Translate()
{
	this->operands[1]->Translate();
	auto vNode = (VarNode*)this->operands[0];
	if (vNode->IsLocal()) {
		if (vNode->GetType() == VType::FLOAT) {
			fprintf(yyout, "\t\tfstore_l\t%d\n", vNode->GetIndex());
		}
		else {
			fprintf(yyout, "\t\tistore_l\t%d\n", vNode->GetIndex());
		}
	}
	else {
		if (vNode->GetType() == VType::FLOAT) {
			fprintf(yyout, "\t\tfstore_g\t%d\n", vNode->GetIndex());
		}
		else {
			fprintf(yyout, "\t\tistore_g\t%d\n", vNode->GetIndex());
		}
	}

	return 0;
}

ConnNode::ConnNode() : OpNode(OpType::OP_CONN)
{
}

int ConnNode::Translate()
{
	for (auto n : this->operands) {
		if (n != NULL) {
			n->Translate();
		}
	}
	return 0;
}

ArgNode::ArgNode(Node* expr) : OpNode(OpType::OP_ARG)
{
	this->operands.push_back(expr);
}

int ArgNode::Translate()
{
	this->operands[0]->Translate();
	fprintf(yyout, "\t\tstore_a\n");
	return 0;
}

ReturnNode::ReturnNode(Node* expr) : OpNode(OpType::OP_RETURN)
{
	this->AddOpreand(expr);
}

int ReturnNode::Translate()
{
	if (!this->operands.empty())
	{
		this->operands[0]->Translate();
		fprintf(yyout, "\t\tstore_r\n");
		fprintf(yyout, "\t\treturn\n");
	}
	else {
		fprintf(yyout, "\t\treturn\n");
	}
	return 0;
}

NegNode::NegNode(Node* expr) : OpNode(OpType::OP_NEG)
{
	this->AddOpreand(expr);
}

int NegNode::Translate()
{
	this->operands[0]->Translate();
	fprintf(yyout, "\t\tneg\n");
	return 0;
}

AddNode::AddNode(Node* expr1, Node* expr2) : OpNode(OpType::OP_ADD)
{
	this->AddOpreand(expr1);
	this->AddOpreand(expr2);
}

int AddNode::Translate()
{
	this->operands[0]->Translate();
	this->operands[1]->Translate();
	fprintf(yyout, "\t\tadd\n");
	return 0;
}

SubNode::SubNode(Node* expr1, Node* expr2) : OpNode(OpType::OP_SUB)
{
	this->AddOpreand(expr1);
	this->AddOpreand(expr2);
}

int SubNode::Translate()
{
	this->operands[0]->Translate();
	this->operands[1]->Translate();
	fprintf(yyout, "\t\tsub\n");
	return 0;
}

MulNode::MulNode(Node* expr1, Node* expr2) : OpNode(OpType::OP_MUL)
{
	this->AddOpreand(expr1);
	this->AddOpreand(expr2);
}

int MulNode::Translate()
{
	this->operands[0]->Translate();
	this->operands[1]->Translate();
	fprintf(yyout, "\t\tmul\n");
	return 0;
}

DivNode::DivNode(Node* expr1, Node* expr2) : OpNode(OpType::OP_DIV)
{
	this->AddOpreand(expr1);
	this->AddOpreand(expr2);
}

int DivNode::Translate()
{
	this->operands[0]->Translate();
	this->operands[1]->Translate();
	fprintf(yyout, "\t\tdiv\n");
	return 0;
}

ModNode::ModNode(Node* expr1, Node* expr2) : OpNode(OpType::OP_MOD)
{
	this->AddOpreand(expr1);
	this->AddOpreand(expr2);
}

int ModNode::Translate()
{
	this->operands[0]->Translate();
	this->operands[1]->Translate();
	fprintf(yyout, "\t\tmod\n");
	return 0;
}

LTNode::LTNode(Node* expr1, Node* expr2) : OpNode(OpType::OP_LT)
{
	this->AddOpreand(expr1);
	this->AddOpreand(expr2);
}

int LTNode::Translate()
{
	this->operands[0]->Translate();
	this->operands[1]->Translate();
	fprintf(yyout, "\t\tcmpLT\n");
	return 0;
}

GTNode::GTNode(Node* expr1, Node* expr2) : OpNode(OpType::OP_GT)
{
	this->AddOpreand(expr1);
	this->AddOpreand(expr2);
}

int GTNode::Translate()
{
	this->operands[0]->Translate();
	this->operands[1]->Translate();
	fprintf(yyout, "\t\tcmpGT\n");
	return 0;
}

GENode::GENode(Node* expr1, Node* expr2) : OpNode(OpType::OP_GE)
{
	this->AddOpreand(expr1);
	this->AddOpreand(expr2);
}

int GENode::Translate()
{
	this->operands[0]->Translate();
	this->operands[1]->Translate();
	fprintf(yyout, "\t\tcmpGE\n");
	return 0;
}

LENode::LENode(Node* expr1, Node* expr2) : OpNode(OpType::OP_LE)
{
	this->AddOpreand(expr1);
	this->AddOpreand(expr2);
}

int LENode::Translate()
{
	this->operands[0]->Translate();
	this->operands[1]->Translate();
	fprintf(yyout, "\t\tcmpLE\n");
	return 0;
}

EQNode::EQNode(Node* expr1, Node* expr2) : OpNode(OpType::OP_EQ)
{
	this->AddOpreand(expr1);
	this->AddOpreand(expr2);
}

int EQNode::Translate()
{
	this->operands[0]->Translate();
	this->operands[1]->Translate();
	fprintf(yyout, "\t\tcmpEQ\n");
	return 0;
}

NENode::NENode(Node* expr1, Node* expr2) : OpNode(OpType::OP_NE)
{
	this->AddOpreand(expr1);
	this->AddOpreand(expr2);
}

int NENode::Translate()
{
	this->operands[0]->Translate();
	this->operands[1]->Translate();
	fprintf(yyout, "\t\tcmpNE\n");
	return 0;
}

FuncNode::FuncNode(Node* argList, string& funcName, bool hasRV) : OpNode(OpType::OP_FUNC)
{
	this->AddOpreand(argList);
	this->funcName = funcName;
	this->hasRV = hasRV;
}

int FuncNode::Translate()
{
	this->operands[0]->Translate();
	fprintf(yyout, "\t\tcall\t%s\n", this->funcName.c_str());
	if (this->hasRV) {
		fprintf(yyout, "\t\tload_r\n");
	}
	return 0;
}

FloatNode::FloatNode(float value) : Node(NodeType::FLOAT)
{
	this->value = value;
}

int FloatNode::Translate()
{
	fprintf(yyout, "\t\tfpush\t%f\n", this->value);
	return 0;
}

float FloatNode::GetValue()
{
	return this->value;
}
