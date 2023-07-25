#ifndef DEMO_TERRAN_H
#define DEMO_TERRAN_H

#include <vector>
#include "../abstract_classes.h"

class Terran : public Race{

public:
    explicit Terran(const std::string &name) : Race(name) {};


    void generateFleet(const std::string &terranFleetComposition) override {
        /*
         * Here we create unique ptrs to the main class Ship and fill the m_fleet, so we can use the polymorph. later
         * when we attack.
         */
    };

    void attackEnemy() override {
        /*
         * Here we will use iterate over all the ships in the fleet and use polymorph. to use the methods dealDamage
         * and takeDamage.
         */
    };

private:
    std::vector<std::unique_ptr<Ship>> m_fleet;


};


#endif //DEMO_TERRAN_H
