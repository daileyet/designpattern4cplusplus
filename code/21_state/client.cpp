#include "state_types.h"

int main(){
    std::cout<<"------------------"<<std::endl;
    ThreadContext context;
    context.start();
    context.acquireCPU();
    context.suspend();
    context.resume();
    context.acquireCPU();
    context.stop();
    std::cout<<"------------------"<<std::endl;
    return 1;
}