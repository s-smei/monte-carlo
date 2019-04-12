#pragma once
#include "Family.h"
#include "Randomizer.h"
#include "Configurator.h"

class EventController {
    private:
        Randomizer randomizer_;
        Configurator configurator_;
    public:
        void configure();
        void makeBreed(Family&);
        bool huntRabbit(Animal&);
        bool huntWolf(Wolf&);
}