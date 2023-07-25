
#ifndef DEMO_VIKING_H
#define DEMO_VIKING_H

#include "../abstract_classes.h"

class Viking : Ship {
    Viking(const std::string &name, int healthPoints, int damage) : Ship(name, healthPoints, damage) {};

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
    void specialAbilityOne() {

    }
};


#endif //DEMO_VIKING_H
