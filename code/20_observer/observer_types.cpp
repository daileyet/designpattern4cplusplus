#include "observer_types.h"

void IPhoneX::addBuyer(Buyer *buyer)
{
    buyers.push_back(buyer);
}

void IPhoneX::removeBuyer(Buyer *buyer)
{
    for (vector<Buyer *>::iterator itr = buyers.begin();
         itr != buyers.end(); itr++)
    {
        if (*itr == buyer)
        {
            buyers.erase(itr);
            return;
        }
    }
}

void IPhoneX::notifyBuyers()
{
    for (vector<Buyer *>::iterator itr = buyers.begin();
         itr != buyers.end();
         itr++)
    {
        (*itr)->action();
    }
}

void BuyerA::action()
{
    std::cout << "A: OK I will buy it." << std::endl;
}

void BuyerB::action()
{
    std::cout << "B: Take another look." << std::endl;
}

IPhoneX::~IPhoneX()
{
    buyers.clear();
}
