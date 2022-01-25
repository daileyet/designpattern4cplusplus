#include "strategy_types.h"
#include <iostream>

int main()
{
    std::cout << "------------------" << std::endl;
    TripContext context;
    context.setTripMode(new ByTrain());
    context.goTrip();
    context.setTripMode(new ByFlight());
    context.goTrip();
    context.setTripMode(new BySelfDrive());
    context.goTrip();

    std::cout << "------------------" << std::endl;
    return 1;
}