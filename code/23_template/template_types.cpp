#include "template_types.h"

void GoOfficeByGolf::powerOn() 
{
    std::cout<<"Insert key and manual power on."<<std::endl;
}

void GoOfficeByGolf::drive() 
{
    std::cout<<"Manual drive."<<std::endl;
}

void GoOfficeByGolf::parking() 
{
    std::cout<<"Manual parking."<<std::endl;
}

void GoOfficeByGolf::powerOff() 
{
    std::cout<<"Manual power off and pull key."<<std::endl;
}

void GoOfficeByXiaoMi::powerOn() 
{
    std::cout<<"No key and auto power on."<<std::endl;
}

void GoOfficeByXiaoMi::drive() 
{
    std::cout<<"Auto drive."<<std::endl;
}

void GoOfficeByXiaoMi::parking() 
{
    std::cout<<"Auto parking."<<std::endl;
}

void GoOfficeByXiaoMi::powerOff() 
{
    std::cout<<"Manual power off."<<std::endl;
}
