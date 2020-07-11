#pragma once

#include <string>
#include <iostream>
using namespace std;
struct Author {
	string name;
	string desc;
	Author(string n, string d) {
		this->desc = d;
		this->name = n;
	}
};
class Book {
public:
	Book(const string name, Author* author)
	{
		this->m_author = author;
		this->m_name = name;
	}
	virtual Book* clone() = 0;
	virtual Book* deepClone() = 0;
	inline void printInfo()
	{
		cout << "Book name:" << m_name << "Author:" << m_author->name << "," << m_author->desc << endl;
		cout << "Book author point address:" << m_author << endl;
	}

protected:
	string m_name;
	Author* m_author;
};