//
// Created by Claudia Steiner on 16.05.24.
//

#include "tier.h"

// Gibt die Art des Tieres zurück
// ("Tiger", "Elephant", "Panda" oder "Dachs*)
std::string Tier::getTierArt() {
    return tierArt;
}


//Gibt den Typ des Tieres zurück
// ("Pflanzenfresser" oder "Fleischfresser")
std::string Tier::getTierTyp() {
    return tierTyp;
}


//Gibt das Gewicht des Tieres zurück
// (soll für jede Instanz eines Tieres ein anderes, zufällig ausgewähltes Gewicht zurückgeben, für dieselbe Instanz soll aber immer dasselbe Gewicht zurückgegeben werden).
float Tier::getGewicht() {
    return gewicht;
}


//Füttert das Tier mit dem angegebenen Futter.
// Das Futter gilt danach als verbraucht und darf
// nicht an ein anderes Tier verfüttert werden,
// sondern muss gelöscht werden.
int Tier::fuettern(Futter &futter) {
    //todo: implement
    return 0;
}

