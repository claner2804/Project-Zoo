//
// Created by Claudia Steiner on 16.05.24.
//

#ifndef ZOO_TIGER_H
#define ZOO_TIGER_H

#include <iostream>
#include "fleischfresser.h"

class Tiger : public Fleischfresser{

protected:
    //zufallszahl zwischen 100 und 250
    float gewicht = rand() % 150 + 100;
    std::string tierTyp = "Tiger";
    std::string magEssen = "Fleisch";

public:

    //Konstruktor und Destruktor
    Tiger();
    ~Tiger();


    virtual int fuettern (Futter& futter) override;

    virtual float getGewicht() override;

    virtual std::string getTierTyp() override;

    virtual std::string getTierArt() override;

    virtual std::string getMagEssen();

};


#endif //ZOO_TIGER_H
