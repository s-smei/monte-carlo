#pragma once
#include "structures.h"
#include <memory>

class Family;

class Animal {
    private:
        int timeBorn;
        FamilyState familyState;
        Sex sex;
        std::shared_ptr<Family> pFamily;
    public:
        Animal(int tBorn, Sex s);
        virtual bool isAlive(int, int);
        bool needFamily();
        std::shared_ptr<Family> getFamily();
        void setFamily(std::shared_ptr<Family>);
        void setFamilyState(FamilyState fs) { familyState=fs; };
        FamilyState getFamilyState() { return familyState; };
};
