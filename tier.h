//
// Created by Claudia Steiner on 16.05.24.
//

#ifndef ZOO_TIER_H
#define ZOO_TIER_H


#include "futter.h"

class Tier {

protected:

    float gewicht = 0;
    std::string tierTyp = "tierTyp";
    std::string tierArt = "tierArt";


public:

    // Füttert das Tier mit dem angegebenen Futter.
    // Das Futter gilt danach als verbraucht und darf
    // nicht an ein anderes Tier verfüttert werden,
    // sondern muss gelöscht werden.
    virtual int fuettern (Futter& futter);


    //Gibt das Gewicht des Tieres zurück (soll für jede
    // Instanz eines Tieres ein anderes, zufällig
    // ausgewähltes Gewicht zurückgeben, für dieselbe
    // Instanz soll aber immer dasselbe Gewicht zurückgegeben
    // werden)
    virtual float getGewicht();


    //Gibt den Typ des Tieres zurück ("Pflanzenfresser" oder "Fleischfresser")
    virtual std::string getTierTyp();


    //Gibt die Art des Tieres zurück ("Tiger", "Elephant", "Panda" oder "Dachs")
    virtual std::string getTierArt();
};


#endif //ZOO_TIER_H
