#include "GameCharacter.hpp"

GameCharacter::GameCharacter(std::string name, int health, int powerLevel): name(name), health(health), powerLevel(powerLevel)
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
