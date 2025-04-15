#include "GameCharacter.hpp"
#include "Interactable.hpp"


GameCharacter::GameCharacter()
{
    name = "Nobody";
    health = 100;
    powerLevel = 100;
}

GameCharacter::GameCharacter(const std::string name, int health, int powerLevel)
{
    this->name = name;
    this->health = health;
    this->powerLevel = powerLevel;
}

void GameCharacter::act()
{
    std::cout << this->name << " is acting!" << std::endl;
}

void GameCharacter::speak()
{
    std::cout << "My name is " << this->name << 
    "\nI have " << this->health << "health" <<
    "\nMy power level is " << this->powerLevel;
}

void GameCharacter::interactWith(GameCharacter* target)
{
    std::cout << this->name << "interacts with " << target-> getName();
}

void GameCharacter::tradeWith(GameCharacter* target)
{
    std::cout << this->name << " trades with " << target->name;
}

void GameCharacter::attack(GameCharacter* target)
{
    std::cout << this->name << " attacks " << target->name;
}

//getters

std::string GameCharacter::getName()
{
    return this->name;
}

int GameCharacter::getHealth()
{
    return this->health;
}

int GameCharacter::getPowerLevel()
{
    return this->powerLevel;
}

//setters

void GameCharacter::setName(std::string name)
{
    this->name = name;
}

void GameCharacter::setHealth(int health)
{
    this->health = health;
}

void GameCharacter::setPowerLevel(int powerLevel) 
{
    this->powerLevel = powerLevel;
}

