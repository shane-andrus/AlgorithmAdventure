#include "Hero.hpp"  
#include <iostream>  
#include "NPC.hpp"  

Hero::Hero(std::string name, int health, int powerlevel) : GameCharacter(name, health, powerlevel) {
    std::cout << "I am " << name << ". My health is " << health << " and my power level is " << powerlevel << std::endl;
}

void Hero::act() {
    std::cout << "I hero act" << std::endl;
}

void Hero::speak() {
    std::cout << "What's up guys, I'm the Hero " << getName() << std::endl;
}

void Hero::interactWithgameCharacter(GameCharacter& target) {  // Pass by reference
    std::cout << "I heroically interact with " << target.getName() << std::endl;
}

void Hero::trade(GameCharacter& target) {  // Pass by reference
    std::cout << "I  heroically trade with " << target.getName() << std::endl;
}

void Hero::attack(GameCharacter& target) {  // Pass by reference
    std::cout << "Heroically Attacking " << target.getName() << std::endl;
}
       