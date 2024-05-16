//
// Created by Claudia Steiner on 16.05.24.
//

#ifndef ZOO_ELEPHANT_H
#define ZOO_ELEPHANT_H

#include <iostream>
#include "pflanzenfresser.h"

class Elephant : public Pflanzenfresser{

protected:
    //zufallszahl zwischen 2000 und 6000
    float gewicht = rand() % 4000 + 2000;
    std::string tierTyp = "Elephant";
    std::string magEssen = "Pflanzen";

public:

    //Konstruktor und Destruktor
    Elephant();
    ~Elephant();


    virtual int fuettern (Futter& futter) override;

    virtual float getGewicht() override;

    virtual std::string getTierTyp() override;

    virtual std::string getTierArt() override;

    virtual std::string getMagEssen();
};


#endif //ZOO_ELEPHANT_H
