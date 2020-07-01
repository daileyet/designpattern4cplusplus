#pragma once
#include "AbstractCar.h"

class AbstractCarBuilder {
public:
	virtual void buildEngine() = 0;
	virtual void buildBody() = 0;
	virtual void buildWheel() = 0;
	virtual AbstractCar* getCar() = 0;
protected:
	AbstractCar* m_car = nullptr;
	string m_engine, m_wheel, m_body;

};