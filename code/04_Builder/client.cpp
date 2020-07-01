#include "Cross4S.h"
#include "FordCarBuilder.h"
#include "VolvoCarBulder.h"

int main() {
	AbstractCar* car = nullptr;
	Cross4S shop;
	shop.setCarBuilder(new FordCarBuilder);
	car = shop.provideCar();
	car->showInfo();

	shop.setCarBuilder(new VolvoCarBuilder);
	car = shop.provideCar();
	car->showInfo();
	
}