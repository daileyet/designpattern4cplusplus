#include "post_offices.h"

int main() {
	// create letter
	Letter myLetter = {"shanghai","beijing",0};

	// set up post office
	FirstPostOffice PO1("shanghai");
	MiddlePostOffice PO2("xuzhou");
	MiddlePostOffice PO3("tianjin");
	LastPostOffice PO4("beijing");

	// set chain between offices
	PO1.setNext(&PO2);
	PO2.setNext(&PO3);
	PO3.setNext(&PO4);

	// submit all letter to first post office to handle
	PO1.delivery(myLetter);
	
	return 0;
}
