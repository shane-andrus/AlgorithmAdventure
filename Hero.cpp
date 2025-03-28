#include <iostream>

#include "Hero.hpp"

Hero::Hero() : GameCharacter("John", 100, 0), quest("TBD"), inventory()
{
}

Hero::Hero(std::string name, int powerLevel) : GameCharacter(name, 100, powerLevel), quest("TBD"), inventory()
{
}

void Hero::act()
{
	std::cout << name << " poses heroically." << std::endl;
}

void Hero::speak()
{
	std::cout << "If by my life or death I can protect you, I will." << std::endl;
}

void Hero::interactWith(GameCharacter& target)
{
	speak();
	act();
	target.speak();
	target.act();
}

void Hero::trade(GameCharacter& target)
{
	//implement
}

void Hero::attack(GameCharacter& target)
{
	//implement
}

std::string Hero::getQuest()
{
	return quest;
}

void Hero::setQuest(std::string quest)
{
	this->quest = quest;
}

Inventory Hero::getInventory()
{
	return inventory;
}
