//
// Created by Claudia Steiner on 16.05.24.
//

#ifndef ZOO_ZOO_H
#define ZOO_ZOO_H

#include <iostream>
#include <string>
#include <map>
#include "Exceptions.h"
#include "tier.h"
#include "futter.h"

/*
 * Die Klasse Zoo repräsentiert ein globales Interface,
 * über das die grundlegende Funktionalität des Zoos aufgerufen
 * werden kann. Der Zoobesucher soll nur mit dieser Klasse in
 * Berührung kommen, die ganze Komplexität des restlichen Systems
 * wird von diese Klasse verborgen (Kapselung).
 */


class Zoo {

    //äußere map: tierart (fleischfresser, pflanzenfresser)
    //innere map: tierid, tier*
    std::map<int, std::map<int, Tier*>> tiere;

    //map: futterid, futter*
    std::map<int, Futter*> futter;


public:

    //konstruktor und destruktor
    Zoo();
    ~Zoo();

    //Fügt ein neues Tier zum Zoo hinzu.
    // Der Rückgabewert ist eine ID, die das
    // jeweilige Tier eindeutig identifiziert.
    int addTier (Tier* tier);


    //Gibt das Tier mit der angegebenen ID zurück.
    Tier* getTier (int id);


    //Entfernt das Tier mit der angegebenen ID aus dem Zoo
    // und gibt alle damit verbundenen Ressourcen wieder frei.
    void deleteTier(int id);


    //Diese Funktion wird aufgerufen,
    // wenn es Zeit ist die Tiere zu füttern.
    // Ziel dieser Funktion ist es, alle Tiere satt
    // zu bekommen. Für Vorgehensweise beim Füttern d
    // er Tiere siehe oben unter Punkt "Fütferung*.
    void fuetterungszeit();


    //Diese Funktion gibt den Pflanzenresser mit dem
    // größten Gewicht zurück.
    Tier* getschwerstenPflanzenfresser();


    //Diese Funktion gibt den Fleischfresser mit dem
    // größten Gewicht zurück.
    Tier* getschwerstenFleischfresser();







};


#endif //ZOO_ZOO_H
