#pragma once
#include "Family.h"

class FamilyWolf : public Family {
    private:
        int lastFoodChildren;
    public:
        bool childrenAlive();
        bool needHunt();
}
