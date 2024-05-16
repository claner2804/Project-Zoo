//
// Created by Claudia Steiner on 16.05.24.
//

#ifndef ZOO_PFLANZEN_H
#define ZOO_PFLANZEN_H

#include <string>
#include "futter.h"

class Pflanzen : public Futter{

public:
    virtual std::string getType() override {
        return "Pflanzen";
    }

    virtual std::string getPflanzenart () = 0;

};


#endif //ZOO_PFLANZEN_H
