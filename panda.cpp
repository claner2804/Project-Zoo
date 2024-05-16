//
// Created by Claudia Steiner on 16.05.24.
//

#include "panda.h"
#include "exceptions.h"


//Füttert das Tier mit dem angegebenen Futter.
// Das Futter gilt danach als verbraucht und darf nicht
// an ein anderes Tier verfüttert werden, sondern muss
// gelöscht werden.
int Panda::fuettern(Futter &futter) {
    if(futter.getType() == magEssen) {
        throw TierIstSattException("Panda mag das und ist jetzt satt");
    } else {
        throw TierMagFutterNichtException("Panda mag Futter nicht");
    }
}

float Panda::getGewicht() {
    return gewicht;
}

std::string Panda::getTierTyp() {
    return tierTyp;
}

std::string Panda::getTierArt() {
    return tierArt;
}

std::string Panda::getMagEssen() {
    return magEssen;
}

Panda::Panda() {
    std::cout << "Pandababy geboren" << std::endl;
}

Panda::~Panda() {
    std::cout << "Panda geht schlafen" << std::endl;
}
