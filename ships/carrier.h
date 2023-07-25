
#ifndef DEMO_CARRIER_H
#define DEMO_CARRIER_H
#include "../abstract_classes.h"

class Carrier : Ship {
    Carrier(const std::string &name, int healthPoints, int damage, int shield, int numberOfInterceptors) : Ship(name, healthPoints, damage), m_shield(shield), m_interceptorsCount(numberOfInterceptors) {};

    void dealDamage() override {
        /*
         * Check if needed to trigger special abilities.
         *
         * All the special abilities are called here.
         */

    }

    void takeDamage(int dmg) override {
        /*
         * Here we do all the calculation to take the given damage from this unit.
         */
    }



private:
    int m_shield{};
    int m_interceptorsCount{};

private:
    void specialAbilityOne() {

    }

    void specialAbilityTwo() {

    }
};

#endif //DEMO_CARRIER_H
