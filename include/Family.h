#pragma once
#include <utility>
#include <memory>
#include "structures.h"

class Animal;
typedef std::weak_ptr<Animal> wAnimal;
typedef std::pair<wAnimal, wAnimal> pairAnimal;

class Family {
    protected:
        pairAnimal adults;
        int timeNextBreed;
    public:
        Family(wAnimal&, wAnimal&, int);
        bool nextBreed(int) const;
        virtual void breed(int, Sex)=0;
        virtual void balance()=0;
        void setNextBreed(int);
        wAnimal getHim() { return adults.first; };
        wAnimal getHer() { return adults.second; };
};
