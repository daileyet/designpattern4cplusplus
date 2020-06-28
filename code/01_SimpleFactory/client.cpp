#include "Factory.h"
// SimpleFactory Client

int main()
{
	Factory* factory = new Factory();

	AbstractProduct* product = nullptr;

	product = factory->getProduct("Ruler");
	product->action();

	product = factory->getProduct("Pencil");
	product->action();

	product = factory->getProduct("Eraser");
	product->action();

	return 0;
}