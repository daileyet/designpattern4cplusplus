#include "seller_types.h"
using namespace std;

int main() {

	Seller* seller = new TicketScalper();
	string from = "Shanghai", to = "NanJing";
	cout << "What is the price of ticket [" << from << " - " << to << "] ?";
	int price =  seller->lookupPrice(from, to);
	cout << "After addition fee 10, the ticket price is "<<price << endl;
	return 0;
}