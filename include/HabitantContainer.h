#pragma once
#include <vector>

#include "Animal.h"
#include "Family.h"
#include "Wolf.h"
#include "Rabbit.h"
typedef std::shared_ptr<Rabbit> sRabbit;
typedef std::shared_ptr<Wolf> sWolf;
typedef std::shared_ptr<Family> sFamily;
typedef std::weak_ptr<Animal> wAnimal;


class HabitantContainer {
    public:
        std::vector<sRabbit> rabbits;
        std::vector<sWolf>   wolfs;
        std::vector<sFamily> families;
        std::vector<wAnimal> aloneAnimals;
};
