//
// Created by Claudia Steiner on 16.05.24.
//

#ifndef ZOO_FUTTER_H
#define ZOO_FUTTER_H

#include <string>
#include <iostream>


class Futter {

public:
    virtual std::string getType() = 0;

    virtual ~Futter() {
        std::cout << "Futter wurde vernascht" << std::endl;
    }

};


#endif //ZOO_FUTTER_H
