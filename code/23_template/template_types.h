#ifndef __TEMPLATE_TYPES_H__
#define __TEMPLATE_TYPES_H__

#include <iostream>

class GoOfficeByCar
{
public:
    virtual ~GoOfficeByCar() {}
    /**
     * @brief template method, use final to forbbiden child class to override
     * 
     */
    virtual void action() final
    {
        openDoor();
        powerOn();
        drive();
        parking();
        powerOff();
        closeDoor();
    }
    virtual void openDoor() {std::cout<<"Unlock to open door."<<std::endl;}
    virtual void powerOn() = 0;
    virtual void drive() = 0;
    virtual void parking() = 0;
    virtual void powerOff() = 0;
    virtual void closeDoor() {std::cout<<"Lock to close door."<<std::endl;}
};

class GoOfficeByGolf : public GoOfficeByCar
{
public:
    GoOfficeByGolf(){std::cout<<"Today by car -- Golf."<<std::endl;}
    void powerOn();
    void drive();
    void parking();
    void powerOff();
};

class GoOfficeByXiaoMi : public GoOfficeByCar
{
public:
    GoOfficeByXiaoMi(){std::cout<<"Today by car -- Xiaomi."<<std::endl;}
    void powerOn();
    void drive();
    void parking();
    void powerOff();
};

#endif // __TEMPLATE_TYPES_H__