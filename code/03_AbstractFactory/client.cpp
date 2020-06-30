#include <iostream>
#include "AbstractFactory.h"
#include "AbstractRuler.h"
#include "AbstractPencil.h"
#include "DeliFactory.h"
#include "ChenguanFactory.h"
using namespace std;
// AbstractFactory Client
int main()
{
	AbstractFactory* factory = nullptr;
	AbstractRuler* productRuler = nullptr;
	AbstractPencil* productPencil = nullptr;

	factory = new DeliFactory();
	productRuler = factory->getRuler();
	productPencil = factory->getPencil();
	cout << "Deli >> ruler:" << productRuler->minDistance() << endl;
	productPencil->draw();

	factory = new ChenguanFactory();
	productRuler = factory->getRuler();
	productPencil = factory->getPencil();
	cout << "Chenguan >> ruler:" << productRuler->minDistance() << endl;
	productPencil->draw();
	return 0;
}