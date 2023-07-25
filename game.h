#ifndef DEMO_GAME_H
#define DEMO_GAME_H

#include <memory>
#include <vector>
#include "abstract_classes.h"
#include "./races/protoss.h"
#include "./races/terran.h"


class Game{
public:
    Game() {
        m_races.emplace_back(new Terran("Terran"));
        m_races.emplace_back(new Protoss("Protoss"));
        m_races.emplace_back(new Protoss("Protoss"));
    }

    int playGame(std::vector<std::string> &compositions) {
        printMenu();


        return 0;
    }



private:
    std::vector<std::unique_ptr<Race>> m_races;
private:
    void printMenu() {

    }

    void printKillMsg() {

    }

    void printTurnMsg() {

    }

    void generateRacesFleets(std::vector<std::string> &compositions) {

    }



};

#endif //DEMO_GAME_H
