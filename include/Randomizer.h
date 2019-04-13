#pragma once
#include "structures.h"
#include <cstdlib>
#include <cmath>

class Randomizer {
    private:
        double getRandom();
    public:
        Sex sex(double);
        int childrenBreed(int, int);
        bool findRabbit(double , double);
        bool catchAnimal(double);
        int week(int);  // for starting configuration process
};