#include "Randomizer.h"
#include "structures.h"
#include <stdlib>

double getRandom() {
    return (double) rand() / (RAND_MAX);
}

FamilyState sex() {
    if (getRandom() < 0.5) {  // todo take param from configuration
        return FamilyState::male;
    }
    else {
        return FamilyState::female;
    }
}

int childrenBreed(int min, int max) {
    parts = max - min + 1;
    double chancePerPart = 1 / parts;
    double chance = 0;
    randValue = getRandom();
    for (int i=1; i<=parts; ++i) {
        if (randValue < i*chancePerPart)
            return i;
    }
    return -1;  // catch error
}