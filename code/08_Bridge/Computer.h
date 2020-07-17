#pragma once

class Display;
class Computer {
public:
	virtual void playVideo() = 0;
	virtual void addDisplay(Display* display) = 0;
};