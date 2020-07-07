#include "DatabaseDriver.h"
#include <iostream>
using namespace std;

DatabaseDriver* DatabaseDriver::m_instance = nullptr;

DatabaseDriver::DatabaseDriver() {
	cout << "New Instance:"<< this << endl;
}

DatabaseDriver::~DatabaseDriver() {

}

DatabaseDriver* DatabaseDriver::getInstance() {
	if (m_instance == nullptr) {
		m_instance = new DatabaseDriver();
	}
	return m_instance;
}

void DatabaseDriver::release() {
	if (m_instance != nullptr) {
		delete m_instance;
		m_instance = nullptr;
	}
}