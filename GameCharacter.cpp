#include "GameCharacter.hpp"


GameCharacter::GameCharacter(): name("N/A"), health(0), powerLevel(0)
{
    std::cout << "\nGame Character created! (Default)" << std::endl;
}

GameCharacter::GameCharacter(const std::string& name, int health, int powerLevel)
{
    std::cout << "\nGame Character created! \nName: " << name << "\nHealth: " << health << "\nPower Level: " << powerLevel; 
}

GameCharacter::GameCharacter(const std::string &name, int health, int powerLevel)
{
}

GameCharacter::~GameCharacter()
{
}

int GameCharacter::getHealth() const
{
    return health;
}

int GameCharacter::getPowerLevel() const 
{
    return powerLevel;
}

std::string GameCharacter::getName() const 
{
    return name; 
}

void GameCharacter::act() {
    std::cout << name << " is acting." << std::endl;
}

void GameCharacter::speak() {
    std::cout << name << " is speaking." << std::endl;
}

// Interactable methods
void GameCharacter::interactWith(GameCharacter* target) {
    std::cout << name << " interacts with " << target->getName() << "." << std::endl;
}

void GameCharacter::trade(GameCharacter* target) {
    std::cout << name << " trades with " << target->getName() << "." << std::endl;
}

void GameCharacter::attack(GameCharacter* target) {
    std::cout << name << " attacks " << target->getName() << "." << std::endl;
}


std::ostream& operator<<(std::ostream& os, const GameCharacter& character) {
    os << "GameCharacter [Name: " << character.name
       << ", Health: " << character.health
       << ", Power Level: " << character.powerLevel << "]";
    return os;
}



