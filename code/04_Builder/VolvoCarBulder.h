#pragma once
#include "AbstractCarBuilder.h"
#include "VolvoCar.h"

class VolvoCarBuilder :
	public AbstractCarBuilder
{
public:
	void buildEngine() {
		m_engine = "ENG-V_001";
	}
	void buildBody() {
		m_body = ("BOY-V_001");
	}
	void buildWheel() {
		m_wheel = ("WHL-V_001");
	}
	AbstractCar* getCar() {
		if (this->m_car == nullptr)
			this->m_car = new VolvoCar(m_wheel, m_body, m_engine);
		return this->m_car;
	}

};

