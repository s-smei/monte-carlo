#include "Family.h"
#include "HabitantContainer.h"

bool Family::nextBreed(int week) const {
    return (bool) week - timeNextBreed;
}

void Family::setNextBreed(int week, int breedCycle) {
    timeNextBreed = week + breedCycle;
}
