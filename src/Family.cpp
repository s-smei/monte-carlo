#include "Family.h"
#include "HabitantContainer.h"

Family::Family(wAnimal& him, wAnimal& her, int tBreed):
    timeNextBreed(tBreed)
    {
        adults.first = him;
        adults.second = her;
    }


bool Family::nextBreed(int week) const {
    bool notReady = week - timeNextBreed;
    return !notReady;
}

void Family::setNextBreed(int tBreed) {
    timeNextBreed = tBreed;
}

