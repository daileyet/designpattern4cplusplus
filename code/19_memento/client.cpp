#include "memento_types.h"

int main()
{
    Player player1;
    StepsManager stepManager;
    cout << "-----------" << endl;
    stepManager.push(player1.doAction("车2平5"));
    stepManager.push(player1.doAction("兵3进1"));
    stepManager.push(player1.doAction("兵4平1"));

    player1.applyAction(stepManager.pop());
    player1.applyAction(stepManager.pop());
    player1.applyAction(stepManager.pop());
    cout << "-----------" << endl;
    return 0;
}
