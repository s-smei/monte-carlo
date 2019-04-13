#include "Randomizer.h"
#include "structures.h"
#include <stdlib>
#include <cmath>

double getRandom() {
    return (double) rand() / (RAND_MAX);
}

FamilyState sex(double maleChance) {
    if (getRandom() <= maleChance) {  // todo take param from configuration
        return FamilyState::male;
    }
    else {
        return FamilyState::female;
    }
}

int childrenBreed(int min, int max) {
    parts = max - min + 1;
    double chancePerPart = 1 / parts;
    randValue = getRandom();
    for (int i=1; i<=parts; ++i) {
        if (randValue < i*chancePerPart)
            return i;
    }
    return -1;  // catch error
}

bool findRabbit(double freeTrace, double maxDistance) {
    double distance = - freeTrace * std::log(getRandom());
    return (distance <= maxDistance);
}

bool catchAnimal(double chance) {
    if (getRandom() <= chance) {
        return true;
    }
    else {
        return false;
    }
}

int week(int maxWeek) {  // Get random week from cycle
    parts = maxWeek;
    double chancePerPart = 1 / parts;
    randValue = getRandom();
    for (int i=1; i<=parts; ++i) {
        if (randValue < i*chancePerPart)
            return i;
    }
}
