#include "awt.h"

int main() {

	Container panel;
	Component* comp1 = new Button("action button");
	panel.add(comp1);
	Component* comp2 = new Checkbox("male",true);
	panel.add(comp2);
	comp2 = new Checkbox("female", false);
	panel.add(comp2);
	panel.repaint();

	panel.remove(comp2);
	panel.repaint();

	panel.removeAll();
	panel.repaint();
	return 0;
}