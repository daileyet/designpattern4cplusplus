#pragma once
#include "Computer.h"

class Display;
class Laptop :
	public Computer
{
public:
	void playVideo() override;
	void addDisplay(Display* display) override;
	void switchDisplay(Display* newDisplay);
private:
	Display* m_display;
};

