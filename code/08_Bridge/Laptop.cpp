#include "Laptop.h"
#include "Display.h"
#include <iostream>
using namespace std;

void Laptop::playVideo()
{
	if (m_display) {
		m_display->show();
	}
}

void Laptop::addDisplay(Display* display)
{
	if (m_display == nullptr) {
		m_display = display;
	}
	else {
		cout << "Already setup dispaly, only support one display, please switch display firstly." << endl;
	}
}

void Laptop::switchDisplay(Display* newDisplay)
{
	m_display = newDisplay;
	cout << "Switch a new display." << endl;
}
