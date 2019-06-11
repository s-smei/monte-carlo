#include "Animal.h"
#include "Family.h"

using std::shared_ptr;

Animal::Animal(int tBorn, Sex s) : 
    timeBorn(tBorn),
    sex(s) {
};

Animal::~Animal() {
    if (familyState == FamilyState::inFamily) {
        
    }
}

bool Animal::isAlive(int week, int lifeLength) {
    return week - timeBorn < lifeLength;
}

bool Animal::needFamily() {
    if (familyState == FamilyState::needFemale)
        return true;
    else return familyState == FamilyState::needMale;
}

wFamily Animal::getFamily() {
    return family;
}

void Animal::setFamily(wFamily f) {
    family = f;
}
