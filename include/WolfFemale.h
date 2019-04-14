#pragma once
#include "Wolf.h"

class WolfFemale : public Wolf {
    private:
        bool canHunt;
    public:
        void setCanHunt();
};
