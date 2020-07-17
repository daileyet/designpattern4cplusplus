#include "PC.h"
#include "Laptop.h"
#include "MyDisplays.h"

int main() {

	Computer* myComputer = new PC();
	myComputer->addDisplay(new MiDisplay());
	myComputer->addDisplay(new Dell24Display());
	myComputer->addDisplay(new CRTDisplay());
	myComputer->playVideo();

	Display* addtionDisplay = new MiDisplay();
	myComputer->addDisplay(addtionDisplay);

	myComputer = new Laptop();
	myComputer->addDisplay(new LaptopDisplay());
	myComputer->playVideo();

	myComputer->addDisplay(addtionDisplay);
	return 0;
}