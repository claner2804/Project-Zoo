//
// Created by Claudia Steiner on 16.05.24.
//

#ifndef ZOO_DACHS_H
#define ZOO_DACHS_H

#include <iostream>
#include "fleischfresser.h"

class Dachs : public Fleischfresser{


protected:
    //zufallszahl zwischen 5 und 15
    float gewicht = rand() % 10 + 5;
    std::string tierTyp = "Dachs";
    std::string magEssen = "Fleisch";
    //std::string magEssen = "Fleisch und Gras";

public:

    //Konstruktor und Destruktor
    Dachs();
    ~Dachs();


    virtual int fuettern (Futter& futter) override;

    virtual float getGewicht() override;

    virtual std::string getTierTyp() override;

    virtual std::string getTierArt() override;

    virtual std::string getMagEssen();

};


#endif //ZOO_DACHS_H
