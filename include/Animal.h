#pragma once
#include "structures.h"
#include <memory>

class Family;
typedef  std::shared_ptr<Family> wFamily;
class Animal {
    private:
        int timeBorn;
        FamilyState familyState;  // set in derived classes
        Sex sex;
        wFamily family;
    public:
        Animal(int tBorn, Sex s);
        ~Animal();
        virtual bool isAlive(int, int);
        bool needFamily();
        wFamily getFamily();
        void setFamily(wFamily);
        void setFamilyState(FamilyState fs) { familyState=fs; };
        FamilyState getFamilyState() { return familyState; };
};
