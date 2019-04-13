#pragma once
#include <libconfig.h++>
#include <utility>
#include <string>

class Configurator {
    public:
        libconfig::Config cfg;
        const libconfig::Setting& root;
        int simulationLength;
        struct field {
            int area;
            int maxWolfDensity;
        };

        struct rabbit {
            int lifeLength;
            int ageAdult;
            double manChance;
            struct families {
                int amount;
                int minChildren;
                int maxChildren;
                int breedCycle;
                int timePregnant;
            };
        };
        
        struct wolf {
            int lifeLength;
            int ageAdult;
            int noFoodDeath;
            double maxDistance;
            double findDiameter;
            double chanceHunt;
            double chanceDrop;
            bool dropEveryday;
            struct families {
                int amount;
                int minChildren;
                int maxChildren;
                int breedCycle;
                int timePregnant;
                int ageYoung;
                int ageMature;
                int childFoodFrequency;
            };
        };
        Configurator(std::string);
        void readSettings(std::string);
        void configureRabbit();
        void configureWolf();
}