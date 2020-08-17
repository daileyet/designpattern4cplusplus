#include "expression_type.h"


Context::Context() :m_input(""), m_result("") {

}

Context* Context::input(string input) {
	m_input = input;
	return this;
}

Context* Context::interpret() {
	vector<string> list;
	splitString(m_input, list, " ");
	AbstractNode* nodes[4];
	for (int i = 0; i < list.size() - 2; i += 2) {
		nodes[0] = new ValueNode(stoi(list.at(i)));
		nodes[1] = new OperationNode(list.at(i + 1));
		nodes[2] = new ValueNode(stoi(list.at(i + 2)));
		nodes[3] = new SimpleExpression(nodes[0], nodes[1], nodes[2]);
		list[i + 2] = nodes[3]->interpret();
	}
	this->m_result = list.back();
	return this;
}

string Context::output() {
	return m_result;
}

void Context::showOutput() {
	cout << "Expression:" << this->m_input << " = " << output() << endl;
}

void Context::splitString(const string& s, vector<string>& v, const string& c)
{
	string::size_type pos1, pos2;
	pos2 = s.find(c);
	pos1 = 0;
	while (string::npos != pos2)
	{
		v.push_back(s.substr(pos1, pos2 - pos1));

		pos1 = pos2 + c.size();
		pos2 = s.find(c, pos1);
	}
	if (pos1 != s.length())
		v.push_back(s.substr(pos1));
}