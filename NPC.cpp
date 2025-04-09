#include <iostream>
#include <ostream>
#include "NPC.hpp"


NPC::NPC(): GameCharacter("Unamed", 100, 10), role("Unknown") 
{
    std::cout << "NPC created! (Default)" << std::endl;
}


NPC::NPC(const std::string& role) : GameCharacter("Unamed", 100, 10), role(role)
{
    std::cout << "NPC created with role: "  << role << std::endl;
}

 std::string NPC::getRole() const {
        return role;
 }

std::ostream& operator<<(std::ostream& os, const NPC& npc) {
    os << "NPC Role: " << npc.role;
    return os;
}

// Implement other methods as needed
void NPC::act() {
    std::cout << "NPC is acting." << std::endl;
}
void NPC::speak() {
    std::cout << "NPC is speaking." << std::endl;
}
void NPC::interactWith(GameCharacter* target) {
    std::cout << "NPC interacts with " << target->getName() << std::endl;
}
void NPC::trade(GameCharacter* target) {
    std::cout << "NPC trades with " << target->getName() << std::endl;
}
void NPC::attack(GameCharacter* target) {
    std::cout << "NPC attacks " << target->getName() << std::endl;
}




