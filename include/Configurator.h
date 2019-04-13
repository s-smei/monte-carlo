#pragma once
#include <libconfig.h++>
#include <utility>
#include <string>

class Configurator {
    public:
        Configurator(const char* fileName);
        const libconfig::Config cfg;
        int simulationLength;
        struct Field {
            int area;
            int maxWolfDensity;
        } field;

        struct Rabbit {
            int lifeLength;
            int ageAdult;
            double maleChance;

            struct Families {
                int amount;
                int minChildren;
                int maxChildren;
                int breedCycle;
                int timePregnant;
            } families;
        } rabbit;
        
        struct wolf {
            int lifeLength;
            int ageAdult;
            double maleChance;

            int noFoodDeath;
            double maxDistance;
            double findDiameter;
            double chanceHunt;
            double chanceDrop;
            bool dropEveryday;

            struct Families {
                int amount;
                int minChildren;
                int maxChildren;
                int breedCycle;
                int timePregnant;
                int ageYoung;
                int ageMature;
                int childFoodFrequency;
            } families;
        } wolf;
        
        void readSettings();
        void configureRabbit();
        void configureWolf();
};