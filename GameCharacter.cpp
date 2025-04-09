#include "GameCharacter.hpp"

GameCharacter::GameCharacter()
{
	name = "Default";
	health = 100;
	power = 100;
}

GameCharacter::GameCharacter(std::string name, int health, int power)
{
	this->name = name;
	this->health = health;
	this->power = power;
}

void GameCharacter::act()
{
	std::cout << this->name << " is acting!" << std::endl;
}

void GameCharacter::speak()
{
	std::cout << "Hello, I am a game character!" << std::endl;
	std::cout << "My name is " << this->name << std::endl;
	std::cout << "My health is " << this->health << std::endl;
	std::cout << "My power is " << this->power << std::endl;
}

void GameCharacter::interactWith(GameCharacter* target)
{
	std::cout << this->name << " interacts with " << target->getName() << std::endl;
}

void GameCharacter::trade(GameCharacter* target)
{
	std::cout << this->name << " trades with " << target->getName() << std::endl;
}

void GameCharacter::attack(GameCharacter* target)
{
	std::cout << this->name << " attacks " << target->getName() << std::endl;
	target->setHealth(target->getHealth() - this->power);
	std::cout << target->getName() << "'s health is now " << target->getHealth() << std::endl;
}


void GameCharacter::setName(std::string name)
{
	this->name = name;
}

std::string GameCharacter::getName()
{
	return this->name;
}

void GameCharacter::setHealth(int health)
{
	this->health = health;
}

int GameCharacter::getHealth()
{
	return this->health;
}

void GameCharacter::setPower(int power)
{
	this->power = power;
}

int GameCharacter::getPower()
{
	return this->power;
}
