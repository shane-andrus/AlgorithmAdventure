#include "NPC.hpp"
#include <iostream>

NPC::NPC() : GameCharacter() {}

NPC::NPC(std::string name, int health, int powerlevel, std::string role)
    : GameCharacter(name, health, powerlevel), role(role) {
}

void NPC::act() {
    std::cout << "NPC is acting." << std::endl;
}

void NPC::speak() {
    std::cout << "NPC says: Hello!" << std::endl;
}

void NPC::interactWithgameCharacter(GameCharacter& target) {
    std::cout << "NPC interacts with another character." << std::endl;
}

void NPC::trade(GameCharacter& target) {
    std::cout << "NPC trades with " << target.getName() << "." << std::endl;
}

void NPC::attack(GameCharacter& target) {
    std::cout << "NPC attacks " << target.getName() << "." << std::endl;
}


