#pragma once
#include "Computer.h"
#include <list>
using namespace std;

constexpr auto MAX_DISPLAY_COUNT = 3;

class PC :
	public Computer
{
public:
	void playVideo() override;
	void addDisplay(Display* display) override;
	inline int displaySize() {
		return m_displays.size();
	}
private:
	list<Display*> m_displays;
};

