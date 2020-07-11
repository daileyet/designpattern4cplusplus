#include <iostream>
#include "CrazyBook.h"

using namespace std;

int main() {
	Author legalAuthor("Mark", "A famous author");
	Book* legalBook = new CrazyBook("The Letter With Feathers", &legalAuthor);
	cout << "Legal book" << endl;
	legalBook->printInfo();

	Book* copyBook1 = legalBook->clone();
	cout << "Copy1 book" << endl;
	copyBook1->printInfo();
	

	Book* copyBook2 = legalBook->deepClone();
	cout << "Copy2 book" << endl;
	copyBook2->printInfo();

	return 0;
}