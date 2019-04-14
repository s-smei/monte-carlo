#include <iostream>
#include <ctime>
#include "Randomizer.h"
#include <iostream>

int main() {
    srand(time(0));  // set random
    Randomizer randomizer;
    Sex s = randomizer.sex(0.5);
    std::cout << (int) s << std::endl;
    int t = 0;
    return 0;
}