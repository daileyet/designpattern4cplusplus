#ifndef __OBSERVER_TYPES_H__
#define __OBSERVER_TYPES_H__

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Buyer
{
public:
    virtual ~Buyer() {}
    virtual void action() = 0;
};

class Product
{
public:
    Product() : amount(0) {}
    virtual ~Product() {}
    virtual void addBuyer(Buyer *buyer) = 0;
    virtual void removeBuyer(Buyer *buyer) = 0;
    virtual void notifyBuyers() = 0;
    void setAmount(int amount)
    {
        this->amount = amount;
        if (this->amount > 0)
        {
            std::cout << "Goods arrived!" << std::endl;
            notifyBuyers();
        }
    }

protected:
    int amount;
};

class IPhoneX : public Product
{
public:
    ~IPhoneX();
    void addBuyer(Buyer *buyer);
    void removeBuyer(Buyer *buyer);
    void notifyBuyers();

private:
    vector<Buyer *> buyers;
};

class BuyerA : public Buyer
{
public:
    void action();
};

class BuyerB : public Buyer
{
public:
    void action();
};

#endif // __OBSERVER_TYPES_H__