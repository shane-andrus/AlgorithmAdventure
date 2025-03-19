#include <iostream>
#include "Hero.hpp"

Hero::Hero(const std::string& name, int health, int powerLevel, const std::string& quest)
    : GameCharacter(name, health, powerLevel), quest(quest) {
    inventory = new Inventory(); // Create Inventory (composition)
}

Hero::~Hero() {
    delete inventory; // Clean up Inventory
}

std::string Hero::getQuest() const {
    return quest;
}

void Hero::setQuest(const std::string& quest) {
    this->quest = quest;
}

Inventory* Hero::getInventory() const {
    return inventory;
}

void Hero::act() {
    std::cout << name << " charges into battle to complete the quest: " << quest << std::endl;
}

void Hero::speak() {
    std::cout << name << " says: 'I will save Computaria!'" << std::endl;
}

void Hero::interactWith(GameCharacter* target) {
    std::cout << name << " greets " << target->getName() << " and offers help." << std::endl;
}

void Hero::trade(GameCharacter* target) {
    std::cout << name << " trades a healing potion with " << target->getName() << std::endl;
}