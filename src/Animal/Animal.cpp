#include "Animal.h"

using std::shared_ptr;

Animal::Animal(int tBorn, Sex s) : 
    timeBorn(tBorn),
    sex(s) {
};

bool Animal::isAlive(int week, int lifeLength) {
    return week - timeBorn < lifeLength;
}

bool Animal::needFamily() {
    if (familyState == FamilyState::needFemale)
        return true;
    else return familyState == FamilyState::needMale;
}

Family* Animal::getFamily() {
    return family;
}

void Animal::setFamily(Family* f) {
    family = f;
}
