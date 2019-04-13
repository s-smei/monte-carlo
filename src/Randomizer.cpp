#include "Randomizer.h"
#include "structures.h"
#include <stdlib>
#include <cmath>

double Randomizer::getRandom() {
    return (double) rand() / (RAND_MAX);
}

FamilyState Randomizer::sex(double maleChance) {
    if (getRandom() <= maleChance) {  // todo take param from configuration
        return FamilyState::male;
    }
    else {
        return FamilyState::female;
    }
}

int Randomizer::childrenBreed(int min, int max) {
    parts = max - min + 1;
    double chancePerPart = 1 / parts;
    randValue = getRandom();
    for (int i=1; i<=parts; ++i) {
        if (randValue < i*chancePerPart)
            return i;
    }
    return -1;  // catch error
}

bool Randomizer::findRabbit(double freeTrace, double maxDistance) {
    double distance = - freeTrace * std::log(getRandom());
    return (distance <= maxDistance);
}

bool Randomizer::catchAnimal(double chance) {
    if (getRandom() <= chance) {
        return true;
    }
    else {
        return false;
    }
}

int Randomizer::week(int maxWeek) {  // Get random week from cycle
    parts = maxWeek;
    double chancePerPart = 1 / parts;
    randValue = getRandom();
    for (int i=1; i<=parts; ++i) {
        if (randValue < i*chancePerPart)
            return i;
    }
}
