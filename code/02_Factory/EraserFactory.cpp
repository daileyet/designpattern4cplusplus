#include "EraserFactory.h"
#include "Eraser.h"

AbstractProduct* EraserFactory::getProduct()
{
	return new Eraser();
}