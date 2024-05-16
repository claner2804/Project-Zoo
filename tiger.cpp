//
// Created by Claudia Steiner on 16.05.24.
//

#include "tiger.h"
#include "exceptions.h"


//Der Zoo beherbergt unterschiedliche Tiere,
// die unterschiedliche Arten von Futter benötigen.
// Da ihnen der Zoo vergessen hat mitzuteilen,
// was für Tier was für Futter benötigt,
// müssen sie die Tiere mit zufälligen Futter versorgen
// und die Reaktion der Tiere beobachten.
// Die Reaktion der Tiere wird über Exceptions mitgeteilt.
//Während der Fütterungszeit wird jedes Tier mit zufällig
// ausgewählten Futter versort. Wenn das Futter das richtige
// war, wird eine TierIstSattException geworfen.
// Wenn das Futter das falsche war, wird eine
// TierMagFutterNichtException geworfen.
// In diesem Fall geben Sie dem Tier anderes
// Futter solange bis es satt ist.
int Tiger::fuettern(Futter &futter) {
    if(futter.getType() == magEssen) {
        //futter verbrauchen und löschen
        delete &futter;
        std::cout << "futter verbraucht und gelöscht" << std::endl;
        throw TierIstSattException("Tiger mag das und ist jetzt satt");
    } else {
        throw TierMagFutterNichtException("Tiger mag Futter nicht");
    }
}




float Tiger::getGewicht() {
    return gewicht;
}

std::string Tiger::getTierTyp() {
    return tierTyp;
}

std::string Tiger::getTierArt() {
    return tierArt;
}

std::string Tiger::getMagEssen() {
    return magEssen;
}

Tiger::Tiger() {
    std::cout << "Tigerbaby geboren" << std::endl;
}

Tiger::~Tiger() {
    std::cout << "Tiger gestorben" << std::endl;
}
