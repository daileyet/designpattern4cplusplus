#ifndef __STATE_TYPES_H__
#define __STATE_TYPES_H__

#include <iostream>
class ThreadContext;
enum ThreadStateName
{
    NEW = 0,
    READY,
    RUNNING,
    BLOCKED,
    DEAD
};

class ThreadState
{
public:
    ThreadState(ThreadStateName name):stateName(name)
    {
        std::cout << "Current Thread state:" << stateName << std::endl;
    }
    virtual ~ThreadState() {}
    inline ThreadStateName getStateName()
    {
        return stateName;
    }

protected:
    ThreadStateName stateName;
};

class NewState : public ThreadState
{
public:
    NewState() : ThreadState(::NEW) {}
    void start(ThreadContext *context);
};

class ReadyState : public ThreadState
{
public:
    ReadyState() : ThreadState(READY) {}
    void acquire(ThreadContext *context);
};

class RunningState : public ThreadState
{
public:
    RunningState() : ThreadState(RUNNING) {}
    void suspend(ThreadContext *context);
    void stop(ThreadContext *context);
};

class BlockedState : public ThreadState
{
public:
    BlockedState() : ThreadState(BLOCKED) {}
    void resume(ThreadContext *context);
};

class DeadState : public ThreadState
{
public:
    DeadState() : ThreadState(::DEAD) {}
};

class ThreadContext
{
public:
    ThreadContext() : state(new NewState()) {}
    void changeState(ThreadState *state);
    ThreadState *getState();
    void start();
    void acquireCPU();
    void suspend();
    void stop();
    void resume();

private:
    ThreadState *state;
};
#endif // __STATE_TYPES_H__