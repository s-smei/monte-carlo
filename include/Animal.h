#pragma once
#include "Family.h"
#include "structures.h"


class Animal {
    protected:
        int timeBorn;
        Sex sex;
        Family& family;
    public:
        virtual bool isAlive();
        virtual bool needFamily();
        virtual Family& getFamily();
};
