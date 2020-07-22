#include "cartypes.h"

void BaoJunCar510::drive()
{
	cout << "Could drive." << endl;
}

CarWarpper::CarWarpper(Car* car) :m_car(car)
{
}

Car4MainAirbg::Car4MainAirbg(Car* car) : CarWarpper(car)
{
}

void Car4MainAirbg::drive()
{
	this->m_car->drive();
	this->deployPrimaryAirBag();
}

void Car4MainAirbg::deployPrimaryAirBag()
{
	cout << "Could deploy the primary airbag." << endl;
}

Car4SencondAirbg::Car4SencondAirbg(Car* car) :CarWarpper(car)
{
}

void Car4SencondAirbg::drive()
{
	this->m_car->drive();
	this->deploySecondAirBag();
}

void Car4SencondAirbg::deploySecondAirBag()
{
	cout << "Could deploy the secondary airbag." << endl;
}

Car4ThirdAirbg::Car4ThirdAirbg(Car* car) :CarWarpper(car)
{
}

void Car4ThirdAirbg::drive()
{
	this->m_car->drive();
	this->deployThirdAirBag();
}

void Car4ThirdAirbg::deployThirdAirBag()
{
	cout << "Could deploy the third airbag." << endl;
}