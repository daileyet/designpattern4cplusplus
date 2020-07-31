#pragma once
#include <iostream>
#include <string>
using namespace std;

class Seller {
public:
	virtual int lookupPrice(string from,string to) = 0;
};

class TrainticketSeller :public Seller {
public:
	int lookupPrice(string from, string to)  {		
		return 100;
	}
};

class TicketScalper :public Seller {
public:
	TicketScalper():m_realSeller(new TrainticketSeller){

	}
	int lookupPrice(string from, string to) {
		int originalPrice = m_realSeller->lookupPrice(from, to);
		cout << "\nTicket [" << from << " - " << to << "] orignal price:" << originalPrice << endl;
		int addPrice = 10;
		return (originalPrice+addPrice);
	}
private:
	Seller* m_realSeller;
};