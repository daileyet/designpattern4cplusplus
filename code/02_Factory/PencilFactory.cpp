#include "PencilFactory.h"
#include "Pencil.h"

AbstractProduct* PencilFactory::getProduct()
{
	return new Pencil();
}
