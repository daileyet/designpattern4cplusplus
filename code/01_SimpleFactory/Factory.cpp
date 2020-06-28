#include "Factory.h"

AbstractProduct* Factory::getProduct(string productName)
{
	AbstractProduct* product = nullptr;

	if (productName == "Ruler")
	{
		product = new Ruler();
	}
	else if (productName == "Pencil")
	{
		product = new Pencil();
	}
	else if (productName == "Eraser")
	{
		product = new Eraser();
	}

	return product;
}
