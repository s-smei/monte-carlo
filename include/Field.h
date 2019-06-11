#pragma once
#include "HabitantContainer.h"
#include "EventController.h"

class Field {
    private:
        int week;
        HabitantContainer habitants_;
    public:
        Field();
        double freeTrace();
        double densityWolf();
};
