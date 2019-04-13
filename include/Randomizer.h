#pragma once
#include "structures.h"

class Randomizer {
    private:
        double getRandom();
    public:
        FamilyState sex();
        int childrenBreed(int, int);
        bool findRabbit();
        bool catchRabbit();
        bool catchWolf();
        int weekNextBreed();  // for starting configuration process
}