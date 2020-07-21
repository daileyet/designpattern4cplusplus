#include "awt.h"

void Container::add(Component* comp)
{
	m_components.push_back(comp);
}

void Container::remove(Component* comp)
{
	m_components.remove(comp);
}

void Container::removeAll()
{
	m_components.clear();
}

void Container::repaint()
{
	cout << "repaint container begin" << endl;

	list<Component*>::const_iterator iter = m_components.cbegin();
	while (iter != m_components.cend()) {
		(*iter)->repaint();
		iter++;
	}

	cout << "repaint container end\n" << endl;
}

Button::Button()
{
}

Button::Button(string label):m_label(label)
{
}

void Button::repaint()
{
	if (m_visible) {
		cout << "repaint button:" << getLabel() << endl;
	}
}

Checkbox::Checkbox()
{
}

Checkbox::Checkbox(string label, bool state):m_label(label),m_state(state)
{
}

void Checkbox::repaint()
{
	if (m_visible) {
		cout << "repaint checkbox:" << getLabel() << ",state:" << getState() << endl;
	}
}
