
#ifndef DEMO_PHOENIX_H
#define DEMO_PHOENIX_H
#include "../abstract_classes.h"

class Phoenix : Ship{
    Phoenix(const std::string &name, int healthPoints, int damage, int shield) : Ship(name, healthPoints, damage), m_shield(shield) {};

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

private:
    void specialAbilityOne() {

    }


};

#endif //DEMO_PHOENIX_H
