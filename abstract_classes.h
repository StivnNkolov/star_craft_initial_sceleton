
#ifndef DEMO_ABSTRACT_CLASSES_H
#define DEMO_ABSTRACT_CLASSES_H
#include <memory>
#include <vector>
#include <string>


class Ship{
public:
    Ship(const std::string &name, int healthPoints, int damage) :m_name(name), m_healthPoints(healthPoints), m_damage(damage) {};
    virtual ~Ship() = default;

    virtual void takeDamage(int dmg) = 0;
    virtual void dealDamage() = 0;



private:
    std::string m_name;
    int m_damage{};
    int m_healthPoints{};

};

class Race {
public:
    explicit Race(const std::string &name) : m_name(name) {};
    virtual ~Race() = default;

    virtual void generateFleet(const std::string &terranFleetComposition) = 0;

    virtual void attackEnemy() = 0;

private:
    std::string m_name;
    std::vector<std::unique_ptr<Ship>> m_fleet;

};





#endif //DEMO_ABSTRACT_CLASSES_H
