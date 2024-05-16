//
// Created by Claudia Steiner on 16.05.24.
//

#ifndef ZOO_EXCEPTIONS_H
#define ZOO_EXCEPTIONS_H

#include <stdexcept>
#include <string>
#include <iostream>

//klasse FactoryException erbt von runtime_error und gibt die Fehlermeldung dessen Konstruktor
class ZooException : public std::runtime_error {
public:
    explicit ZooException(const std::string& message) : std::runtime_error(message) {}
};


class TierIstSattException : public ZooException {
public:
    explicit TierIstSattException(const std::string& message) : ZooException(message) {}

};


class TierMagFutterNichtException   : public ZooException {
public:
    explicit TierMagFutterNichtException (const std::string& message) : ZooException(message) {}

};


class InvalidAnimalException : public ZooException {
public:
    explicit InvalidAnimalException(const std::string& message) : ZooException(message) {}
};

#endif //ZOO_EXCEPTIONS_H
