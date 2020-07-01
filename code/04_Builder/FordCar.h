#pragma once
#include "AbstractCar.h"
class FordCar :
	public AbstractCar
{
public:
	FordCar(string wheel, string body, string engine):AbstractCar(wheel,body,engine) {}
	void showInfo() override {
		cout << "Ford\n";
		AbstractCar::showInfo();
	}
};

