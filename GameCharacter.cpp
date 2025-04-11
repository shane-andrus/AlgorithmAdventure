#include "GameCharacter.hpp"

// Because I'm including default values, I only need one constructor
GameCharacter::GameCharacter(std::string name = "John", int powerLevel = 1) : name(name), health(100), powerLevel(powerLevel), inventory()
{
}

std::string GameCharacter::getName()
{
	return name;
}

void GameCharacter::setName(std::string name)
{
	this->name = name;
}

int GameCharacter::getHealth()
{
	return health;
}

void GameCharacter::setHealth(int health)
{
	this->health = health;
}

int GameCharacter::getPowerLevel()
{
	return powerLevel;
}

void GameCharacter::setPowerLevel(int powerLevel)
{
	this->powerLevel = powerLevel;
}

Inventory GameCharacter::getInventory()
{
	return inventory;
}

GameCharacter::~GameCharacter()
{
}
