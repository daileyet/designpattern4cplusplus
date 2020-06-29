#include "RulerFactory.h"
#include "Ruler.h"

AbstractProduct* RulerFactory::getProduct()
{
	return new Ruler();
}
