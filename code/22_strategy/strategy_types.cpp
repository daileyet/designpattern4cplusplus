#include "strategy_types.h"
#include <iostream>

void ByTrain::goOut()
{
    std::cout << "It will cost 35 hours" << std::endl;
}

void ByFlight::goOut()
{
    std::cout << "It will cost 7 hours" << std::endl;
}

void BySelfDrive::goOut()
{
    std::cout << "It will cost 7 days" << std::endl;
}

TripContext::~TripContext()
{
    if (this->tripMode)
    {
        delete this->tripMode;
    }
}

void TripContext::setTripMode(TripMode *mode)
{
    if (this->tripMode)
    {
        delete this->tripMode;
    }
    this->tripMode = mode;
}

TripMode *TripContext::getTripMode()
{
    return this->tripMode;
}

void TripContext::goTrip()
{
    if (this->tripMode)
    {
        this->tripMode->goOut();
    }
}
