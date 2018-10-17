#include "FarmTimer.h"
#include <ctime>

FarmTimer::FarmTimer(PlantType plant) {
this->plantType = plant;
}

bool FarmTimer::calculateEndTime(){
    int todSeconds = time(NULL) % 86400;
    int todMinutes = todSeconds / 60;
    switch (plantType) {
        case Oak:


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