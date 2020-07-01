#pragma once
#include <string>
#include <iostream>
using namespace std;

class AbstractCar {
public:
	AbstractCar() {}
	AbstractCar(string wheel, string body, string engine) :m_wheel(wheel), m_body(body), m_engine(engine) {}
	virtual void showInfo() {
		cout << "Wheel-" << m_wheel << ",Body-" << m_body << ",Engine-" << m_engine << endl;
	}
protected:
	void setWheel(string wheel) {
		this->m_wheel = wheel;
	}
	void setBody(string body) {
		this->m_body = body;
	}
	void setEngine(string engine) {
		this->m_engine = engine;
	}
private:
	string m_wheel;
	string m_body;
	string m_engine;
};