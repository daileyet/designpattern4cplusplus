#include "AbstractFactory.h"
#include "RulerFactory.h"
#include "PencilFactory.h"
#include "EraserFactory.h"
#include "Ruler.h"
#include "Pencil.h"
#include "Eraser.h"

// Factory Client
int main()
{
	AbstractFactory* factory = nullptr;
	AbstractProduct* product = nullptr;

	factory = new RulerFactory();
	product = factory->getProduct();
	product->action();

	factory = new PencilFactory();
	product = factory->getProduct();
	product->action();

	factory = new EraserFactory();
	product = factory->getProduct();
	product->action();

	return 0;
}