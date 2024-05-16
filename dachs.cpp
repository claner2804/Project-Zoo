//
// Created by Claudia Steiner on 16.05.24.
//

#include "dachs.h"
#include "exceptions.h"

int Dachs::fuettern(Futter &futter) {
    if(futter.getType() == magEssen) {
        throw TierIstSattException("Dachs mag das und ist jetzt satt");
    } else {
        throw TierMagFutterNichtException("Dachs mag Futter nicht");
    }
}

float Dachs::getGewicht() {
    return gewicht;
}

std::string Dachs::getTierTyp() {
    return tierTyp;
}

std::string Dachs::getTierArt() {
    return tierArt;
}

std::string Dachs::getMagEssen() {
    return magEssen;
}

Dachs::Dachs() {
    std::cout << "Dachsbaby geboren" << std::endl;
}

Dachs::~Dachs() {
    std::cout << "Dachs geht schlafen" << std::endl;
}
