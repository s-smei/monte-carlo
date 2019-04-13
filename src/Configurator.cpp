#include "Configurator.h"

using namespace std;
using namespace libconfig;

Configurator::Configurator(string fileName) {
    cfg.readle(fileName);
    root = cfg.getRoot()
    readSettings(string fileName);
}

Configurator::readSettings(string fileName) {
    Config cfg;
    // continue from example
}