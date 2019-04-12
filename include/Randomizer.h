#pragma once
#include <random>
#include "structures.h"

class Randomizer {
    private:
        double getRandom();
    public:
        FamilyState sex();
        int childrenBreed();
        bool findRabbit();
        bool catchRabbit();
        bool catchWolf();
        int weekNextBreed();  // for starting configuration process
}