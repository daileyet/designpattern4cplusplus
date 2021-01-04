#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Colleague;
class Mediator{
public:
    virtual void registerColleague(Colleague* colleague) = 0;
    virtual Colleague* pick(string number) =0;
};

class Colleague{
public:
    Colleague(string number,Mediator* mediator):myNumber(number),callCeneter(mediator){}
    virtual void dial(string number);
    virtual void reply() =0;
    string getNumber();
private:
    Mediator* callCeneter;
    string myNumber;
};

class CallCenter : public Mediator{
public:
    void registerColleague(Colleague* colleague);
    Colleague* pick(string number);    
private:
    vector<Colleague*> list;
};

class UserA : public Colleague{
public:
    UserA(string number,Mediator* mediator): Colleague(number,mediator){}
    void reply();
};

class UserB : public Colleague{
public:
    UserB(string number,Mediator* mediator): Colleague(number,mediator){}
    void reply();
};

class UserC : public Colleague{
public:
    UserC(string number,Mediator* mediator): Colleague(number,mediator){}
    void reply();
};