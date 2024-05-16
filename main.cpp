#include <iostream>
#include "tier.h"
#include "zoo.h"
#include "panda.h"
#include "dachs.h"
#include <ctime>
#include "tiger.h"

int main() {

    std::srand(std::time(nullptr));

    Zoo zoo;

    zoo.fuetterungszeit();

    return 0;

}
