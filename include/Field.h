#pragma once
#include "HabitantContainer.h"
#include "EventController.h"

class Field {
    private:
        int week;
        HabitantContainer& habitants_;
        EventController& controller_;
    public:
        double freeTrace();
        double densityWolf();
        double configure();
}
