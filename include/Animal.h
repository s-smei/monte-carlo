#pragma once
#include "structures.h"
#include <memory>

class Family;

class Animal {
    private:
        int timeBorn;
        FamilyState familyState;  // set in derived classes
        Sex sex;
        Family* family;
    public:
        Animal(int tBorn, Sex s);
        virtual bool isAlive(int, int);
        bool needFamily();
        Family* getFamily();
        void setFamily(Family*);
        void setFamilyState(FamilyState fs) { familyState=fs; };
        FamilyState getFamilyState() { return familyState; };
};
