#include "state_types.h"

void NewState::start(ThreadContext *context)
{
    std::cout << "call NewState::start()" << std::endl;
    if (stateName == ::NEW)
    {
        if (context)
            context->changeState(new ReadyState());
    }
    else
    {
        std::cout << "Cannot call NewState::start() since current state is not [NEW]" << std::endl;
    }
}

void ReadyState::acquire(ThreadContext *context)
{
    std::cout << "call ReadyState::acquire()" << std::endl;
    if (stateName == ::READY)
    {
        if (context)
            context->changeState(new RunningState());
    }
    else
    {
        std::cout << "Cannot call ReadyState::acquire() since current state is not [READY]" << std::endl;
    }
}

void RunningState::suspend(ThreadContext *context)
{
    std::cout << "call RunningState::suspend()" << std::endl;
    if (stateName == ::RUNNING)
    {
        if (context)
            context->changeState(new BlockedState());
    }
    else
    {
        std::cout << "Cannot call RunningState::suspend() since current state is not [RUNNING]" << std::endl;
    }
}

void RunningState::stop(ThreadContext *context)
{
    std::cout << "call RunningState::stop()" << std::endl;
    if (stateName == ::RUNNING)
    {
        if (context)
            context->changeState(new DeadState());
    }
    else
    {
        std::cout << "Cannot call RunningState::stop() since current state is not [RUNNING]" << std::endl;
    }
}

void BlockedState::resume(ThreadContext *context)
{
    std::cout << "call BlockedState::resume()" << std::endl;
    if (stateName == ::BLOCKED)
    {
        if (context)
            context->changeState(new ReadyState());
    }
    else
    {
        std::cout << "Cannot call BlockedState::resume() since current state is not [BLOCKED]" << std::endl;
    }
}

void ThreadContext::changeState(ThreadState *state)
{
    if (this->state)
    {
        delete this->state;
    }
    this->state = state;
}

ThreadState *ThreadContext::getState()
{
    return state;
}

void ThreadContext::start()
{
    if (state && state->getStateName() == ::NEW)
    {
        static_cast<NewState *>(state)->start(this);
    }
}

void ThreadContext::acquireCPU()
{
    if (state && state->getStateName() == ::READY)
    {
        static_cast<ReadyState *>(state)->acquire(this);
    }
}

void ThreadContext::suspend()
{
    if (state && state->getStateName() == ::RUNNING)
    {
        static_cast<RunningState *>(state)->suspend(this);
    }
}

void ThreadContext::stop()
{
    if (state && state->getStateName() == ::RUNNING)
    {
        static_cast<RunningState *>(state)->stop(this);
    }
}

void ThreadContext::resume()
{
    if (state && state->getStateName() == ::BLOCKED)
    {
        static_cast<BlockedState *>(state)->resume(this);
    }
}
