#include <iostream>
#include "Villain.hpp"

Villain::Villain(const std::string& name, int health, int powerLevel, int evilPoints)
    : GameCharacter(name, health, powerLevel), evilPoints(evilPoints) {}

int Villain::getEvilPoints() const {
    return evilPoints;
}

void Villain::setEvilPoints(int evilPoints) {
    this->evilPoints = evilPoints;
}

void Villain::act() {
    std::cout << name << " schemes to steal the Code Crystal with " << evilPoints << " evil points!" << std::endl;
}

void Villain::speak() {
    std::cout << name << " sneers: 'The Code Crystal will be mine!'" << std::endl;
}

void Villain::interactWith(GameCharacter* target) {
    std::cout << name << " glares at " << target->getName() << " and plots their downfall." << std::endl;
}

void Villain::trade(GameCharacter* target) {
    std::cout << name << " tricks " << target->getName() << " into a bad trade." << std::endl;
}