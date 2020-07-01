#pragma once
#include "AbstractCarBuilder.h"
#include "FordCar.h"

class FordCarBuilder :
	public AbstractCarBuilder
{
public:
	void buildEngine() {
		m_engine = "ENG-F_001";
	}
	void buildBody() {
		m_body = ("BOY-F_001");
	}
	void buildWheel() {
		m_wheel = ("WHL-F_001");
	}
	AbstractCar* getCar() {
		if(this->m_car==nullptr)
			this->m_car = new FordCar(m_wheel,m_body,m_engine);
		return this->m_car;
	}

};

