#include "cartypes.h"

int main() {
	cout << "Baojun 510 Basic car" << endl;

	Car* baseCar = new BaoJunCar510();
	baseCar->drive();

	cout << "\nBaojun 510 L1 car" << endl;
	Car* type1 = new Car4MainAirbg(baseCar);
	type1->drive();
	cout << endl;

	cout << "Baojun 510 L2 car" << endl;
	Car* type2 = new Car4SencondAirbg(type1);
	type2->drive();
	cout << endl;

	cout << "Baojun 510 L3 car" << endl;
	Car* type3 = new Car4ThirdAirbg(type2);
	type3->drive();

	return 0;
}