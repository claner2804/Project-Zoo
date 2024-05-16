//
// Created by Claudia Steiner on 16.05.24.
//

#ifndef ZOO_PANDA_H
#define ZOO_PANDA_H

#include <iostream>
#include "pflanzenfresser.h"

class Panda : public Pflanzenfresser{


protected:
    //zufallszahl zwischen 50 und 100
    float gewicht = rand() % 50 + 50;
    std::string tierTyp = "Panda";
    std::string magEssen = "Pflanzen";
    //std::string magEssen = "Bambus";

public:

    //Konstruktor und Destruktor
    Panda();
    ~Panda();


    virtual int fuettern (Futter& futter) override;

    virtual float getGewicht() override;

    virtual std::string getTierTyp() override;

    virtual std::string getTierArt() override;

    virtual std::string getMagEssen();
};


#endif //ZOO_PANDA_H
