//
// Created by Claudia Steiner on 16.05.24.
//

#ifndef ZOO_FLEISCH_H
#define ZOO_FLEISCH_H

#include <string>
#include "futter.h"

class Fleisch : public Futter{

public:
     virtual std::string getType() override {
        return "Fleisch";
    }

    virtual ~Fleisch() {
    }

};



#endif //ZOO_FLEISCH_H
