#include "visitor_types.h"

int main()
{
    std::cout << "------------------" << std::endl;
    ShopCart cart;
    Water water1("哇哈哈");
    Water water2("农夫山泉");
    Water water3("百岁山");
    CocaCola cocaCola;
    cart.add(&water1);
    cart.add(&water2);
    cart.add(&water3);
    cart.add(&cocaCola);

    Customer customer;
    Cashier cashier;

    cart.accept(&customer);

    cart.accept(&cashier);
    std::cout << "------------------" << std::endl;
    return 1;
}