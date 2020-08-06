#pragma once
#include <string>
#include <iostream>
using namespace std;

struct Letter
{
	string sender;
	string receiver;
	int stamp_count;
	string toInfo() {
		return "From:"+ sender+", To:"+receiver+", stamp count:"+ to_string(stamp_count);
	}
};

class PostOffice {
public:
	explicit PostOffice(string name) :m_officeName(name) {
		this->m_next = nullptr;
	}
	virtual void stamp(Letter& letter) {
		letter.stamp_count = letter.stamp_count + 1;
	}
	virtual void delivery(Letter& letter) {
		stamp(letter);

		if (m_next) {
			cout << "Delivery from [" << m_officeName << "] to next office [" << m_next->m_officeName <<"]"<< endl;
			m_next->delivery(letter);
		}
		else {
			cout << "Current office [" << m_officeName << "] is last post office" << endl;
		}
	}
	virtual void setNext(PostOffice* next) {
		this->m_next = next;
	}
private:
	PostOffice* m_next;
	string m_officeName;
};

class FirstPostOffice : public PostOffice {
public:
	FirstPostOffice(string name) :PostOffice(name) {

	}
	void stamp(Letter& letter) {
		letter.stamp_count = 1;
	}
};

class MiddlePostOffice : public PostOffice {
public:
	MiddlePostOffice(string name) :PostOffice(name) {}
};

class LastPostOffice : public PostOffice {
public:
	LastPostOffice(string name) : PostOffice(name) {

	}
	void setNext(PostOffice* next) {
		cout << "This is last post office, no next station." << endl;
	}
	void delivery(Letter& letter) {
		PostOffice::delivery(letter);
		cout << "Assign people to delivery letter:" << letter.toInfo() << endl;
	}
};