//
// Created by Claudia Steiner on 16.05.24.
//

#ifndef ZOO_GRAS_H
#define ZOO_GRAS_H

#include "pflanzen.h"
#include <iostream>


class Gras : public Pflanzen {

public:
    virtual std::string getPflanzenart() override {
        return "Gras";
    }

};


#endif //ZOO_GRAS_H
