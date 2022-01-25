#include "template_types.h"
#include <iostream>

int main()
{
    std::cout << "------------------" << std::endl;
    GoOfficeByCar *byCar = new GoOfficeByGolf();
    if (byCar)
    {
        byCar->action();
        delete byCar;
    }
    byCar = new GoOfficeByXiaoMi();
    if (byCar)
    {
        byCar->action();
        delete byCar;
    }
    std::cout << "------------------" << std::endl;
    return 1;
}