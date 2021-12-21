#include "observer_types.h"

int main(){
    Product* ihponex = new IPhoneX();
    Buyer* buyerA = new BuyerA();
    Buyer* buyerB = new BuyerB();

    ihponex->addBuyer(buyerA);
    ihponex->addBuyer(buyerB);

    ihponex->setAmount(100);
    return 1;
}