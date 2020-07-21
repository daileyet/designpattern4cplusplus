#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;

class Component {
public:
	inline bool isVisible() {
		return m_visible;
	}
	inline void setVisible(bool b) {
		this->m_visible = b;
	}
	virtual void repaint() = 0;
protected:
	bool m_visible = true;
};

class Container :public Component {
public:
	void add(Component* comp);
	void remove(Component* comp);
	void removeAll();
	void repaint() override;
private:
	list<Component*> m_components;
};

class Button :public Component {
public:
	explicit Button();
	explicit Button(string label);
	inline string getLabel() {
		return m_label;
	}
	inline void setLabel(string label) {
		this->m_label = label;
	}
	void repaint() override;
private:
	string m_label;
};

class Checkbox :public Component {
public:
	explicit Checkbox();
	explicit Checkbox(string label,bool state);
	inline string getLabel() {
		return m_label;
	}
	inline void setLabel(string label) {
		this->m_label = label;
	}
	inline bool getState() {
		return m_state;
	}
	inline void setState(bool state) {
		this->m_state = state;
	}
	void repaint() override;
private:
	string m_label;
	bool m_state = false;
};
