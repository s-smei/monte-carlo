#include "Animal.h"

using std::shared_ptr;

Animal::Animal(int tBorn, Sex s) : 
    timeBorn(tBorn),
    sex(s) {
    familyState = (sex == Sex::male)?
        FamilyState::needFemale : FamilyState::needMale;
};

bool Animal::isAlive(int week, int lifeLength) {
    return (week-timeBorn < lifeLength)? true : false;
}

bool Animal::needFamily() {
    if (familyState == FamilyState::needFemale)
        return true;
    else if (familyState == FamilyState::needMale)
        return true;
    else
        return false;
}

shared_ptr<Family> Animal::getFamily() {
    return pFamily;
}

void Animal::setFamily(shared_ptr<Family> f) {
    pFamily.reset();
    familyState = FamilyState::inFamily;
    pFamily = f;
}
