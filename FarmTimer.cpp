#include "FarmTimer.h"
#include <ctime>

FarmTimer::FarmTimer(PlantType plant) {
this->plantType = plant;
}

bool FarmTimer::calculateEndTime(){
    int todSeconds = time(NULL) % 86400;
    int todMinutes = todSeconds / 60;
    int minuteOfNextGrowthCycle = 0;
    int days = 0;
    switch (plantType) {
        case Oak:
        minuteOfNextGrowthCycle = (todMinutes % TREE_GROWTH_CYCLE) * TREE_GROWTH_CYCLE + TREE_GROWTH_CYCLE;
        if(minuteOfNextGrowthCycle)
        break;
        case Willow:
        break;
        case Maple:
        break;
        case Yew:
        break;
        case Magic:
        break;
        case Fruit:
        break;
        case Herb:
        break;
    }
}