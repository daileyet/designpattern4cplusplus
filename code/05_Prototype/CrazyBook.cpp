#include "CrazyBook.h"
CrazyBook::CrazyBook(const string name, Author* author) :Book(name, author) {}
CrazyBook::CrazyBook(string bookName, string authorName, string authorDesc) : Book(bookName, new Author(authorName, authorDesc))
{
}
// simple copy
Book* CrazyBook::clone()
{
	Book* copy = new CrazyBook(this->m_name, this->m_author);
	return copy;
}

// deep copy
Book* CrazyBook::deepClone()
{
	string newBookName = "New " + this->m_name;
	Author* newAuthor = new Author("Jack", "A good author");
	Book* copy = new CrazyBook(newBookName, newAuthor);
	return copy;
}