#pragma once
#include "AbstractCar.h"
#include "AbstractCarBuilder.h"

class Cross4S
{
public:
	void setCarBuilder(AbstractCarBuilder* carBuilder) {
		this->m_carBuilder = carBuilder;
	}
	AbstractCar* provideCar() {
		m_carBuilder->buildEngine();
		m_carBuilder->buildBody();
		m_carBuilder->buildWheel();
		return m_carBuilder->getCar();
	}
private:
	AbstractCarBuilder* m_carBuilder;
};

