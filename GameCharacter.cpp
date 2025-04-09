#include "GameCharacter.hpp"
#include <iostream>

GameCharacter::GameCharacter(std::string name, int health, int powerLevel)
	: name(name), health(health), powerLevel(powerLevel)
{
	std::cout << "GameCharacter " << name << " created with health " << health << " and power level " << powerLevel << std::endl;
}

GameCharacter::~GameCharacter()
{
	std::cout << "GameCharacter " << name << " destroyed." << std::endl;
}

void GameCharacter::takeDamage(int damage)
{
	health -= damage;
	std::cout << name << " takes " << damage << " damage! Remaining health: " << health << std::endl;
}