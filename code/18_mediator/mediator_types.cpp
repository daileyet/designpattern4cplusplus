#include "mediator_types.h"

void Colleague::dial(string number){
    if(!callCeneter){
        cout<<"Please set call center"<<endl;
        return;
    }
    Colleague* dest = callCeneter->pick(number);
    if(dest){
        dest->reply();
    }else{
        cout<<"Not found dest:"<<number<<endl;
    }
}

string Colleague::getNumber(){
    return this->myNumber;
}

void CallCenter::registerColleague(Colleague* colleague){
    list.push_back(colleague);
}

Colleague* CallCenter::pick(string number){
    Colleague* ret = NULL;
    auto it = list.begin();
    while(it!=list.end()){
        if(number == (*it)->getNumber()){
            ret =  (*it);
            break;
        }
        it++;
    }
    return ret;
}

void UserA::reply(){
    cout<<"This is A. Nice to talk with you."<<endl;
}

void UserB::reply(){
    cout<<"This is B. Nice to talk with you."<<endl;
}

void UserC::reply(){
    cout<<"This is C. Nice to talk with you."<<endl;
}