#include "memento_types.h"

Player::Player()
{
}

Player::~Player()
{
}

Step *Player::doAction(std::string state)
{
    this->state_ = state;
    Step *step = new Step(this->state_);
    cout << "Do step:" << this->state_ << endl;
    return step;
}

void Player::applyAction(Step *step)
{
    if (step)
    {
        this->state_ = step->getState();
        cout << "Back step:" << this->state_ << endl;
    }
}

StepsManager::StepsManager()
{
}

StepsManager::~StepsManager()
{
}

void StepsManager::push(Step *step)
{
    if (step)
    {
        mementos.push(step);
    }
}

Step *StepsManager::pop()
{
    Step *step = NULL;
    if (mementos.empty())
        return step;
    step = mementos.top();
    mementos.pop();
    return step;
}
