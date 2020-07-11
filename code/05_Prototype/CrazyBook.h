#pragma once
#include "Book.h"
class CrazyBook :
	public Book
{
public:
	CrazyBook(const string name, Author* author);
	CrazyBook(string bookName, string authorName, string authorDesc);
	Book* clone() override;
	Book* deepClone() override;
};


