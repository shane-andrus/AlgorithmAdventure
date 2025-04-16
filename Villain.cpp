#include <iostream>
#include <ostream>
#include "Villain.hpp"

Villain::Villain() : GameCharacter("Unamed", 100, 20), evilPlan("Unknown") 
{
    std::cout << "Villain created! (Default)" << std::endl;
}

Villain::Villain(const std::string name, int health, int powerLevel, int evilPoints) : GameCharacter(name, health, powerLevel), evilPoints(evilPoints)
{
    this->setName(name);
    this->setHealth(health);
    this->setPowerLevel(powerLevel);
    this->evilPlan = "Unknown";
}



std::string Villain::getEvilPlan()
{
    return evilPlan;
}

void Villain::setEvilPlan(std::string evilPlan)
{
    this->evilPlan = evilPlan;
}

std::ostream& operator<<(std::ostream& os, const Villain& villain) {
    os << "Villain Evil Plan: " << villain.evilPlan;
    return os;
}

void Villain::act() {
    std::cout << "NPC is acting." << std::endl;
}
void Villain::speak() {
    std::cout << "NPC is speaking." << std::endl;
}
void Villain::interactWith(GameCharacter* target) {
    std::cout << "NPC interacts with " << target->getName() << std::endl;
}
void Villain::trade(GameCharacter* target) {
    std::cout << "NPC trades with " << target->getName() << std::endl;
}
void Villain::attack(GameCharacter* target) {
    std::cout << this->getName() << " attacks " << target->getName() << "!" << std::endl;
}

int Villain::getEvilPoints()
{
    return evilPoints;
}

void Villain::setEvilPoints(int evilPoints)
{
    this->evilPoints = evilPoints;
}
