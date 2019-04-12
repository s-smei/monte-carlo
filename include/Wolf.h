#pragma once
#include "Animal.h"

class Wolf : public Animal {
    private:
        bool needFood;
        double chanceHunt;
    public:
        virtual void hunt();
}
