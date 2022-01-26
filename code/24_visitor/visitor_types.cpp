#include "visitor_types.h"

void Customer::visit(Water *goods)
{
    float percent = goods->getPrice() / goods->getWeight();
    std::cout << "Water:" << goods->getBrand() << " %[price/weight]= " << (percent) << std::endl;
}

void Customer::visit(CocaCola *goods)
{
    float percent = goods->getPrice() / goods->getWeight();
    std::cout << "CocaCola %[price/weight]= " << (percent) << std::endl;
}

void Cashier::visit(Water *goods)
{
    this->waterCount++;

    std::cout << "Water count =" << this->waterCount << " total price = " << (this->waterCount * goods->getPrice()) << std::endl;
}

void Cashier::visit(CocaCola *goods)
{
    this->colaCount++;
    std::cout << "CocaCola count =" << this->colaCount << " total price = " << (this->colaCount * goods->getPrice()) << std::endl;
}

void ShopCart::accept(Visitor *visitor)
{
    for (int index = 0; index < list.size(); index++)
    {
        Goods *element = list[index];
        element->accept(visitor);
    }
}

void ShopCart::add(Goods *element)
{
    this->list.push_back(element);
}

void Water::accept(Visitor *visitor)
{
    if (visitor)
        visitor->visit(this);
}

void CocaCola::accept(Visitor *visitor) 
{
    if (visitor)
            visitor->visit(this);
}
