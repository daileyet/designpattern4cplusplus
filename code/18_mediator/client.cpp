#include "mediator_types.h"

int main(){
    Mediator* callCeneter = new CallCenter();

    Colleague* userA = new UserA("1001",callCeneter);
    Colleague* userB = new UserB("1002",callCeneter);
    Colleague* userC = new UserC("1003",callCeneter);

    callCeneter->registerColleague(userA);
    callCeneter->registerColleague(userB);
    callCeneter->registerColleague(userC);

    userA->dial("1002");
    userA->dial("1003");

    userC->dial("1001");
    userC->dial("1002");
    userC->dial("1004");

    return 0;
}