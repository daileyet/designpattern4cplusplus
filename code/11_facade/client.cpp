#include "dining.h"

int main() {

	Waitress* waitress = new Waitress();
	waitress->order();
	waitress->pay();

	return 0;
}