#include "ThreadSafeDatabaseDriver.h"

#include <iostream>
using namespace std;

ThreadSafeDatabaseDriver* ThreadSafeDatabaseDriver::m_instance = nullptr;
mutex ThreadSafeDatabaseDriver::m_mutex;

ThreadSafeDatabaseDriver::ThreadSafeDatabaseDriver() {
	cout << "New Instance:" << this << endl;
}

ThreadSafeDatabaseDriver::~ThreadSafeDatabaseDriver() {

}

ThreadSafeDatabaseDriver* ThreadSafeDatabaseDriver::getInstance() {
	if (m_instance == nullptr) {
		m_mutex.lock();
		if (m_instance == nullptr) {
			m_instance = new ThreadSafeDatabaseDriver();
		}
		m_mutex.unlock();
	}
	return m_instance;
}

void ThreadSafeDatabaseDriver::release() {
	if (m_instance != nullptr) {
		delete m_instance;
		m_instance = nullptr;
	}
}