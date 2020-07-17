#include "PC.h"
#include "Display.h"
#include <iostream>

void PC::playVideo()
{	
	list<Display*>::iterator iter =  m_displays.begin();
	while (iter!=m_displays.end()) {
		(*iter)->show();
		iter++;
	}

}

void PC::addDisplay(Display* display)
{
	if (displaySize() >= MAX_DISPLAY_COUNT) {
		cout << "This PC only support max connect 3 display." << endl;
		return;
	}
	m_displays.push_back(display);
}
