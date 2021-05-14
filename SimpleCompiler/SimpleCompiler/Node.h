#pragma once
#include <vector>
#include <string>
using namespace std;

enum class NodeType;
enum class OpType;
enum class VType;

extern FILE* yyout;

class Node
{
public:
	Node(NodeType type);
	NodeType GetType();
	virtual int Translate() = 0;

private:
	NodeType type;
};

class IntNode : public Node {
public:
	IntNode(int value);
	int Translate();
	int GetValue();

private:
	int value;
};

class FloatNode : public Node {
public:
	FloatNode(float value);
	int Translate();
	float GetValue();

private:
	float value;
};

class VarNode : public Node {
public:
	VarNode(int index, bool local, VType type);
	int Translate();
	int GetIndex();
	bool IsLocal();
	VType GetType();

private:
	int index;
	bool local;
	VType type;
};

class OpNode : public Node {
public:
	OpNode(OpType type);
	virtual ~OpNode();
	OpType GetType();
	void AddOpreand(Node* n);

protected:
	vector<Node*> operands;

private:
	OpType opType;
};

class WhileNode : public OpNode {
public:
	WhileNode(int lbl);
	int Translate();

private:
	int lable1;
	int lable2;
};

class IfNode : public OpNode {
public:
	IfNode(int lbl);
	int Translate();

private:
	int lable1;
	int lable2;
};

class PrintNode : public OpNode {
public:
	PrintNode(Node* node);
	int Translate();

private:
};

class AssignNode : public OpNode {
public:
	AssignNode(VarNode* var, Node* expr);
	int Translate();
};

class ConnNode : public OpNode {
public:
	ConnNode();
	int Translate();
};

class ArgNode : public OpNode {
public:
	ArgNode(Node* expr);
	int Translate();
};

class ReturnNode : public OpNode {
public:
	ReturnNode(Node* expr);
	int Translate();
};

class NegNode : public OpNode {
public:
	NegNode(Node* expr);
	int Translate();
};

class AddNode : public OpNode {
public:
	AddNode(Node* expr1, Node* expr2);
	int Translate();
};

class SubNode : public OpNode {
public:
	SubNode(Node* expr1, Node* expr2);
	int Translate();
};

class MulNode : public OpNode {
public:
	MulNode(Node* expr1, Node* expr2);
	int Translate();
};

class DivNode : public OpNode {
public:
	DivNode(Node* expr1, Node* expr2);
	int Translate();
};

class ModNode : public OpNode {
public:
	ModNode(Node* expr1, Node* expr2);
	int Translate();
};

class LTNode : public OpNode {
public:
	LTNode(Node* expr1, Node* expr2);
	int Translate();
};

class GTNode : public OpNode {
public:
	GTNode(Node* expr1, Node* expr2);
	int Translate();
};

class GENode : public OpNode {
public:
	GENode(Node* expr1, Node* expr2);
	int Translate();
};

class LENode : public OpNode {
public:
	LENode(Node* expr1, Node* expr2);
	int Translate();
};

class EQNode : public OpNode {
public:
	EQNode(Node* expr1, Node* expr2);
	int Translate();
};

class NENode : public OpNode {
public:
	NENode(Node* expr1, Node* expr2);
	int Translate();
};

class FuncNode : public OpNode {
public:
	FuncNode(Node* argList, string& funcName, bool hasRV);
	int Translate();

private:
	string funcName;
	bool hasRV;
};