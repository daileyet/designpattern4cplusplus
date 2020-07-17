#pragma once
#include "Display.h"
#include <iostream>
using namespace std;

class MiDisplay :
	public Display
{
public:
	void show() {
		cout << "[Mi Display]"<<" show video now..." << endl;
	}
};

class Dell24Display :
	public Display
{
public:
	void show() {
		cout << "[Dell 24 Display]" << " show video now..." << endl;
	}
};

class CRTDisplay :
	public Display
{
public:
	void show() {
		cout << "[CRT Display]" << " show video now..." << endl;
	}
};


class LaptopDisplay :public Display {
public:
	void show() {
		cout << "[Laptop Display]" << " show video now..." << endl;
	}
};
