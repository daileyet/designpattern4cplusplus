#pragma once
#include <string>
#include <iostream>
using namespace std;

class Car {
public:
	virtual void drive() = 0;
};

class BaoJunCar510 :public Car {
public:
	void drive() override;
};

class CarWarpper :public Car {
public:
	explicit CarWarpper(Car* car);
	virtual void drive() = 0;
protected:
	Car* m_car;
};

class Car4MainAirbg :public CarWarpper {
public:
	explicit Car4MainAirbg(Car* car);
	void drive() override;
	void deployPrimaryAirBag();
};

class Car4SencondAirbg :public CarWarpper {
public:
	explicit Car4SencondAirbg(Car* car);
	void drive() override;
	void deploySecondAirBag();
};

class Car4ThirdAirbg :public CarWarpper {
public:
	explicit Car4ThirdAirbg(Car* car);
	void drive() override;
	void deployThirdAirBag();
};