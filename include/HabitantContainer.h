#pragma once
#include <vector>

#include "Animal.h"
#include "Family.h"
#include "Wolf.h"
#include "Rabbit.h"

class HabitantContainer {
    public:
        std::vector<Rabbit&> rabbits;
        std::vector<Wolf&>   wolfs;
        std::vector<Family&> families;
        std::vector<Animal&> aloneAnimals;
};
