//
// Created by Claudia Steiner on 16.05.24.
//

#include "elephant.h"
#include "exceptions.h"

int Elephant::fuettern(Futter &futter) {
    if(futter.getType() == magEssen) {
        throw TierIstSattException("Elephant mag das und ist jetzt satt");
    } else {
        throw TierMagFutterNichtException("Elephant mag Futter nicht");
    }
}

float Elephant::getGewicht() {
    return gewicht;
}

std::string Elephant::getTierTyp() {
    return tierTyp;
}


std::string Elephant::getTierArt() {
    return tierArt;
}

std::string Elephant::getMagEssen() {
    return magEssen;
}

Elephant::Elephant() {
    std::cout << "Elefantenbaby geboren" << std::endl;
}

Elephant::~Elephant() {
    std::cout << "Elefant geht schlafen" << std::endl;
}
