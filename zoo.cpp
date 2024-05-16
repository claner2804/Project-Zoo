//
// Created by Claudia Steiner on 16.05.24.
//

#include "zoo.h"
#include "exceptions.h"
#include "tier.h"
#include "dachs.h"
#include "panda.h"
#include "tiger.h"
#include "elephant.h"
#include <iostream>

//Fügt ein neues Tier zum Zoo hinzu.
// Der Rückgabewert ist eine ID, die das
// jeweilige Tier eindeutig identifiziert.
int Zoo::addTier(Tier *tier) {
    // Get the current number of animals in the zoo to use as the ID for the new animal
    int id = tiere.size();

    // Add the animal to the map
    tiere[id][id] = tier;

    std::cout << "Tierbaby wurde eine eindeutige ID zugeordnet: " << id << std::endl;

    // Return the ID
    return id++;
}


//Gibt das Tier mit der angegebenen ID zurück.
Tier *Zoo::getTier(int id) {
    // Check if the animal exists
    if(tiere.find(id) == tiere.end()) {
        throw InvalidAnimalException("Tier *Zoo::getTier Tier existiert nicht");
    }

    // Return the animal
    return tiere[id][id];
}


// Entfernt das Tier mit der angegebenen ID aus dem Zoo
// und gibt alle damit verbundenen Ressourcen wieder frei.
void Zoo::deleteTier(int id) {
    // Check if the animal exists
    if(tiere.find(id) == tiere.end()) {
        throw InvalidAnimalException("void Zoo::deleteTier Tier existiert nicht");
    }

    // Delete the animal
    tiere.erase(id);
}




// Diese Funktion wird aufgerufen, wenn es Zeit ist die Tiere zu füttern.
// Ziel dieser Funktion ist es, alle Tiere satt zu bekommen.
void Zoo::fuetterungszeit() {

    std::cout << "----------------------------" << std::endl;
    std::cout << "Fütterungszeit!" << std::endl;
    std::cout << "----------------------------" << std::endl;
    // Durch alle Tierarten gehen
    for(auto& tierart : tiere) {
        std::cout << "Tierart: " << tierart.first << std::endl;
        // Durch alle Tiere in der aktuellen Tierart gehen
        for(auto& tier : tierart.second) {
            std::cout << "Tier: " << tier.first << std::endl;
            // Zufälliges Futter holen
            int foodId = rand() % futter.size();
            std::cout << "Futter: " << foodId << std::endl;
            Futter* food = futter[foodId];

            // Versuchen, das Tier zu füttern
            std::cout << "Versuche, das Tier zu füttern" << std::endl;
            try {
                tier.second->fuettern(*food);
            } catch(TierIstSattException &e) {
                std::cout << e.what() << std::endl;
            } catch(TierMagFutterNichtException &e) {
                std::cout << e.what() << std::endl;

                // Das Tier weiter füttern, bis es satt ist
                while(true) {
                    std::cout << "Tier weiter füttern, bis es satt ist" << std::endl;
                    // Neues zufälliges Futter holen
                    std::cout << "Neues zufälliges Futter holen" << std::endl;
                    foodId = rand() % futter.size();
                    food = futter[foodId];

                    try {
                        std::cout << "Versuche nochmal das Tier zu füttern" << std::endl;
                        tier.second->fuettern(*food);
                        break;
                    } catch(TierMagFutterNichtException &e) {
                        std::cout << e.what() << std::endl;
                    }
                }
            }
        }
    }
}



// Diese Funktion gibt den Pflanzenfresser
// mit dem größten Gewicht zurück.
Tier *Zoo::getschwerstenPflanzenfresser() {
    //todo: implement
}



//Diese Funktion gibt den Fleischfresser
// mit dem größten Gewicht zurück.
Tier *Zoo::getschwerstenFleischfresser() {
    //todo: implement
}

Zoo::~Zoo() {
    // Löschen Sie alle Tiere
    for(auto& stockwerk : tiere) {
        for(auto& tier : stockwerk.second) {
            delete tier.second;
        }
    }

    // Löschen Sie alle Futterobjekte
    for(auto& futterPair : futter) {
        delete futterPair.second;
    }
}

Zoo::Zoo() {
    std::cout << "Zoo eröffnet" << std::endl;

    //tiere hinzufügen
    addTier(new Dachs());
    addTier(new Panda());
    addTier(new Tiger());
    addTier(new Elephant());
}





