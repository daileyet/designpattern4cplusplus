#pragma once
#include <iostream>
#include <string>
using namespace std;

class Cook {
public:
	inline void cook() {
		cout << "Cook is cooking" << endl;
	}
};

class BusBoy {
public:
	inline void delivery() {
		cout << "Busboy is delivering" << endl;
	}
};

class Cashier {
public:
	inline void checkout() {
		cout << "Cashier is checkouting" << endl;
	}
};

class Waitress {
public:
	explicit Waitress() {
		m_cook = new Cook();
		m_boy = new BusBoy();
		m_cashier = new Cashier();
	}
	void order() {
		m_cook->cook();
		m_boy->delivery();
	}
	void pay() {
		m_cashier->checkout();
	}
private:
	Cook* m_cook;
	BusBoy* m_boy;
	Cashier* m_cashier;
};
