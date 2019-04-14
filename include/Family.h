#pragma once
#include <utility>
#include <memory>
#include "structures.h"

class Animal;
typedef std::unique_ptr<Animal> pAnimal;

class Family {
    protected:
        std::pair<pAnimal, pAnimal> adults;
        int timeNextBreed;
    public:
        bool nextBreed(int) const;
        virtual void breed(int, Sex)=0;
        virtual void balance()=0;
        void setNextBreed(int, int);
};
