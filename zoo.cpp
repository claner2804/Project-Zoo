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
#include "futter.h"
#include "fleisch.h"
#include "bambus.h"
#include "gras.h"
#include <iostream>
#include <print>

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


int Zoo::addFutter(Futter *futter) {
    // Get the current number of animals in the zoo to use as the ID for the new animal
    int id = allefutter.size();

    // Add the animal to the map
    allefutter[id][id] = futter;

    std::cout << "neuem Futter wurde eine eindeutige ID zugeordnet: " << id << std::endl;

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


    //30 iterationen lang
    for(int i = 0; i < 5; i++) {

        sleep(2);

        std::cout << "----------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "Iteration: " << i+1 << std::endl;
        std::cout << std::endl;
        std::cout << "----------------------------" << std::endl;

        //wenn kein futter mehr vorhanden ist
        if (allefutter.empty()) {
            std::cout << "Kein Futter mehr vorhanden" << std::endl;
            break;
        }

    // Durch alle Tierarten gehen
    for(auto& tierart : tiere) {
        //std::cout << "Tierart: " << tierart.first << std::endl;
        // Durch alle Tiere in der aktuellen Tierart gehen
        for (auto &tier: tierart.second) {
            std::cout << "------> Tier: " << tier.second->getTierTyp() << std::endl;

            // Zufälliges Futter holen
            int foodId = rand() % allefutter.size();
            std::cout << "FutterID: " << foodId << std::endl;

            //wenn das futter noch in der map existiert
            if (allefutter.find(foodId) == allefutter.end()) {
                std::cout << "Futter existiert nicht mehr" << std::endl;
                continue;
            }

            try {
                Futter *food = allefutter[foodId][foodId];
                tier.second->fuettern(*food);

            } catch (TierIstSattException &e) {
                //futter aus der map entfernen
                allefutter.erase(foodId);
                std::cout << "futter verbraucht und gelöscht" << std::endl;
                std::cout << e.what() << std::endl;
            } catch (TierMagFutterNichtException &e) {
                std::cout << e.what() << std::endl;
            }

        }
    }
    }
    std::cout << "----------------------------" << std::endl;
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

    std::cout << "Zoo schließt bald..." << std::endl;

    //alle tiere löschen
    for(auto& tierart : tiere) {
        for(auto& tier : tierart.second) {
            delete tier.second;
        }
    }

    //alle futter löschen
    for(auto& futter : allefutter) {
        for(auto& f : futter.second) {
            delete f.second;
        }
    }

    std::cout << "Zoo geschlossen" << std::endl;
}




Zoo::Zoo() {
    std::cout << "Zoo eröffnet" << std::endl;

    //tiere hinzufügen
    addTier(new Dachs());
    addTier(new Panda());
    addTier(new Tiger());
    addTier(new Elephant());

    //futter hinzufügen
    addFutter(new Fleisch);
    addFutter(new Pflanzen);
    addFutter(new Pflanzen);
    addFutter(new Fleisch);
    addFutter(new Pflanzen);
    addFutter(new Pflanzen);
    addFutter(new Fleisch);
    addFutter(new Pflanzen);
    addFutter(new Pflanzen);
    addFutter(new Fleisch);
    addFutter(new Pflanzen);
    addFutter(new Pflanzen);
    addFutter(new Fleisch);
    addFutter(new Fleisch);
    addFutter(new Fleisch);


}





