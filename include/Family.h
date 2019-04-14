#pragma once
#include <utility>
#include "Animal.h"

class Family {
    protected:
        std::pair<Animal, Animal> adults;
        int timeNextBreed;
    public:
        virtual void nextBreed();
        virtual void breed();
        virtual void setNextBreed();
};
