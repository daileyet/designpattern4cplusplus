#pragma once
#include <iostream>
#include <list>
using namespace std;

class Command {
public:
	virtual void execute() = 0;
};

class Receiver {
public:
	virtual void action() = 0;
};

class Invoker {
public:
	virtual void invoke() = 0;
};


class MiCenter : public Receiver {
public:
	void action() {
		cout << "[MiCenter]Stored detect people event" << endl;
	}
};

class ZigBee :public Receiver {
public:
	ZigBee() :state(false) {}
	void action() {
		if (state) {
			cout << "Current state is turn on, so turn off now.\n" << endl;
		}
		else {
			cout << "Current state is turn off, so turn on now.\n" << endl;
		}
		state = !state;
	}
	bool getState() {
		return state;
	}
private:
	bool state;
};


class SendMessage : public Command {
public:
	SendMessage(Receiver* receiver,bool hasPerson) :m_hasPerson(hasPerson),m_receiver(receiver) {

	}
	void execute() {
		cout << (m_hasPerson?"Detect people now.":"Not detect people in recent minutes.")<< endl;
		if (m_receiver)
			m_receiver->action();
	}
private:
	bool m_hasPerson;
	Receiver* m_receiver;
};


class TurnOn : public Command {
public:
	TurnOn(Receiver* receiver) :m_receiver(receiver) {

	}
	void execute() {
		if (m_receiver) {
			ZigBee* receiver = static_cast<ZigBee*>(m_receiver);
			if (receiver && receiver->getState() == false)
				m_receiver->action();
			else
				cout << "Reciver[ZigBee] already turn on, so ignore" << endl;
		}
			
	}
private:
	Receiver* m_receiver;
};

class TurnOff : public Command {
public:
	TurnOff(Receiver* receiver) :m_receiver(receiver) {

	}
	void execute() {
		if (m_receiver) {
			ZigBee* receiver = static_cast<ZigBee*>(m_receiver);
			if (receiver && receiver->getState())
				m_receiver->action();
			else
				cout << "Reciver[ZigBee] already turn off, so ignore" << endl;
		}
	}
private:
	Receiver* m_receiver;
};



class BodySensor : public Invoker {
public:
	BodySensor(list<Command*>& cmdlist):cmdlist_ptr(cmdlist){}

	void invoke() {		
		list<Command*>::const_iterator iter = cmdlist_ptr.begin();
		while (iter != cmdlist_ptr.end()) {
			(*iter)->execute();
			iter++;
		}
	}
private:
	list<Command*> cmdlist_ptr;
};