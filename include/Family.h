#pragma once
#include <utility>
#include <memory>
#include "structures.h"

class Animal;
typedef std::unique_ptr<Animal> pAnimal;
typedef std::pair<pAnimal, pAnimal> pairAnimal;

class Family {
    protected:
        pairAnimal adults;
        int timeNextBreed;
    public:
        Family(pAnimal, pAnimal, int);
        bool nextBreed(int) const;
        virtual void breed(int, Sex)=0;
        virtual void balance();
        void setNextBreed(int);
};
