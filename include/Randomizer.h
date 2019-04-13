#pragma once
#include "structures.h"

class Randomizer {
    private:
        double getRandom();
    public:
        FamilyState sex(double);
        int childrenBreed(int, int);
        bool findRabbit(double , double);
        bool catchAnimal(double);
        int weekNextBreed(int);  // for starting configuration process
}