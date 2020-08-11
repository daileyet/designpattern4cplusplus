#include "command_types.h"

int main() {

	Receiver* reciver1 = new MiCenter;
	Receiver* reciver2 = new ZigBee;

	list<Command*> list;

	Command* command1 = new SendMessage(reciver1,true);
	Command* command2 = new TurnOn(reciver2);
	Command* command3 = new SendMessage(reciver1, false);
	Command* command4 = new TurnOff(reciver2);
	Command* command5 = new TurnOff(reciver2);
	list.push_back(command1);
	list.push_back(command2);
	list.push_back(command3);
	list.push_back(command4);
	list.push_back(command5);

	Invoker* invoker = new BodySensor(list);
	invoker->invoke();
	return 0;
}