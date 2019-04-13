#include "Configurator.h"
#define SETTINGS const Setting&
#define R_F rabbit.families
#define W_F wolf.families

using namespace std;
using namespace libconfig;

Configurator::Configurator(const char* fileName) {
    Config cfg;
    cfg.readFile(fileName);  
    readSettings();
}

void Configurator::readSettings() {
    string name = cfg.lookup("name");
    //const Setting &books = root["inventory"]["books"];
    //const Setting &book = books[i];
    //ook.lookupValue("title", title);
    SETTINGS root = cfg.getRoot();
    root.lookupValue("simulationLength", simulationLength);
    
    SETTINGS Field = root["field"];
    Field.lookupValue("area", field.area);
    Field.lookupValue("maxWolfDensity", field.maxWolfDensity);

    SETTINGS Rabbit = root["rabbit"];
    Rabbit.lookupValue("lifeLength", rabbit.lifeLength);
    Rabbit.lookupValue("ageAdult", rabbit.ageAdult);
    Rabbit.lookupValue("maleChance", rabbit.maleChance);
        SETTINGS r_families = Rabbit["families"];
        r_families.lookupValue("amount", R_F.amount);
        r_families.lookupValue("minChildren", R_F.minChildren);
        r_families.lookupValue("maxChildren", R_F.maxChildren);
        r_families.lookupValue("breedCycle", R_F.breedCycle);
        r_families.lookupValue("timePregnant", R_F.timePregnant);
    
    SETTINGS Wolf = root["wolf"];
    Wolf.lookupValue("lifeLength", wolf.lifeLength);
    Wolf.lookupValue("ageAdult", wolf.ageAdult);
    Wolf.lookupValue("maleChance", wolf.maleChance);
    Wolf.lookupValue("noFoodDeath", wolf.noFoodDeath);
    Wolf.lookupValue("maxDistance", wolf.maxDistance);
    Wolf.lookupValue("findDiameter", wolf.findDiameter);
    Wolf.lookupValue("chanceHunt", wolf.chanceHunt);
    Wolf.lookupValue("chanceDrop", wolf.chanceDrop);
        SETTINGS w_families = Wolf["families"];
        w_families.lookupValue("amount", W_F.amount);
        w_families.lookupValue("minChildren", W_F.minChildren);
        w_families.lookupValue("maxChildren", W_F.maxChildren);
        w_families.lookupValue("breedCycle", W_F.breedCycle);
        w_families.lookupValue("timePregnant", W_F.timePregnant);
        w_families.lookupValue("ageYoung", W_F.ageYoung);
        w_families.lookupValue("ageMature", W_F.ageMature);
        w_families.lookupValue(
            "childFoodFrequency",
            W_F.childFoodFrequency
        );

}