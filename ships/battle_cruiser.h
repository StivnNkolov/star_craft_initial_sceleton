
#ifndef DEMO_BATTLE_CRUISER_H
#define DEMO_BATTLE_CRUISER_H
#include "../abstract_classes.h"
class BattleCruiser : Ship{
    BattleCruiser(const std::string &name, int healthPoints, int damage) : Ship(name, healthPoints, damage) {};

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

    void specialAbilityTwo() {

    }

};

#endif //DEMO_BATTLE_CRUISER_H
