#ifndef __MEMENTO_TYPES_H__
#define __MEMENTO_TYPES_H__

#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Step
{
public:
    Step(std::string state) : state_(state) {}
    ~Step() {}
    inline std::string getState()
    {
        return state_;
    }

private:
    std::string state_;
};

class Player
{
public:
    Player();
    ~Player();
    Step *doAction(std::string state);
    void applyAction(Step *step);

private:
    std::string state_;
};

class StepsManager
{
public:
    StepsManager();
    ~StepsManager();
    void push(Step *step);
    Step *pop();

private:
    std::stack<Step *> mementos;
};

#endif // __MEMENTO_TYPES_H__