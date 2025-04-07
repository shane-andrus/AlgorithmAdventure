#include "GameCharacter.hpp"
#include <iostream>

GameCharacter::GameCharacter(): name("N/A"), health(0), powerLevel(0)
{
    std::cout << "\nGame Character created! (Default)" << std::endl;
}

GameCharacter::GameCharacter(std::string name, int health, int powerLevel)
{
    std::cout << "\nGame Character created! \nName: " << name << "\nHealth: " << health << "\nPower Level: " << powerLevel; 
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

