#include <iostream>
#include "NPC.hpp"

NPC::NPC(const std::string& name, int health, int powerLevel, const std::string& role)
    : GameCharacter(name, health, powerLevel), role(role) {}

std::string NPC::getRole() const {
    return role;
}

void NPC::setRole(const std::string& role) {
    this->role = role;
}

void NPC::act() {
    std::cout << name << " performs their role as a " << role << " in the village." << std::endl;
}

void NPC::speak() {
    std::cout << name << " says: 'Welcome to our village, traveler!'" << std::endl;
}

void NPC::interactWith(GameCharacter* target) {
    std::cout << name << " shares village gossip with " << target->getName() << std::endl;
}

void NPC::trade(GameCharacter* target) {
    std::cout << name << " trades local goods with " << target->getName() << std::endl;
}