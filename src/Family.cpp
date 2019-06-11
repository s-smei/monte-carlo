#include "Family.h"
#include "HabitantContainer.h"

Family::Family(pAnimal him, pAnimal her, int tBreed):
    timeNextBreed(tBreed){
        adults.first = std::move(him);
        adults.second = std::move(her);
    }


bool Family::nextBreed(int week) const {
    bool notReady = week - timeNextBreed;
    return !notReady;
}

void Family::setNextBreed(int tBreed) {
    timeNextBreed = tBreed;
}

