#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class AbstractNode {
public:
	virtual string interpret() = 0;
};

class ValueNode : public AbstractNode {
public:
	ValueNode() :m_val(0) {}
	ValueNode(int val) :m_val(val) {}
	string interpret() {
		return std::to_string(m_val);
	}

private:
	int m_val;
};

class OperationNode : public AbstractNode {
public:
	OperationNode() :m_oper("+") {}
	OperationNode(string val) :m_oper(val) {}
	string interpret() {
		return m_oper;
	}

private:
	string m_oper;
};

class SimpleExpression :public AbstractNode {
public:
	SimpleExpression() :m_leftNode(nullptr), m_operNode(nullptr), m_rightNode(nullptr) {}
	SimpleExpression(AbstractNode* left, AbstractNode* operNode, AbstractNode* right) :
		m_leftNode(left), m_operNode(operNode), m_rightNode(right) {}
	string interpret() {
		if (m_operNode && m_leftNode && m_rightNode) {
			string operation = m_operNode->interpret();
			string valL = m_leftNode->interpret();
			string valR = m_rightNode->interpret();
			if (operation == "+") {
				return std::to_string(stoi(valL) + stoi(valR));
			}
			else if (operation == "-") {
				return std::to_string((stoi(valL) - stoi(valR)));
			}
		}
		return "0";
	}
private:
	AbstractNode* m_leftNode, * m_rightNode, * m_operNode;
};

class Context {
public:
	Context();
	Context* input(string expression);
	Context* interpret();
	string output();
	void showOutput();
private:
	void splitString(const string& s, vector<string>& v, const string& c);
	string m_input;
	string m_result;
};
