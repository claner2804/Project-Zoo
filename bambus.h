//
// Created by Claudia Steiner on 16.05.24.
//

#ifndef ZOO_BAMBUS_H
#define ZOO_BAMBUS_H

#include "pflanzen.h"
#include <iostream>

class Bambus : public Pflanzen{

public:
    virtual std::string getPflanzenart() override {
        return "Bambus";
    }

};


#endif //ZOO_BAMBUS_H
