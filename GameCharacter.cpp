#include "GameCharacter.hpp"

// Constructor Overloading
GameCharacter::GameCharacter(std::string name, int health, int powerLevel) : name(name), health(health), powerLevel(powerLevel), inventory()
{
}

// Constructor Overloading
GameCharacter::GameCharacter(std::string name, int powerLevel): name(name), health(100), powerLevel(powerLevel), inventory()
{
}
 
// Constructor Overloading
GameCharacter::GameCharacter(std::string name): name(name), health(100), powerLevel(1), inventory()
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
