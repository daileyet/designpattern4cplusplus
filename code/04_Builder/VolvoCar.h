#pragma once
#include "AbstractCar.h"

class VolvoCar :
	public AbstractCar
{
public:
	VolvoCar(string wheel, string body, string engine) :AbstractCar(wheel, body, engine) {}
	void showInfo() override {
		cout << "Volvo\n";
		AbstractCar::showInfo();
	}
};

