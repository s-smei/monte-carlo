#include "Configurator.h"

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
    const libconfig::Setting& root = cfg.getRoot();

    root.lookupValue("simulationLength", simulationLength);
    //const Setting &field = root["field"];
    
}