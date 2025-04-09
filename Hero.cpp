#include "Hero.hpp"
#include "Inventory.hpp"

Hero::Hero(std::string name, int health, int power, std::string quest) : GameCharacter(name, health, power)
{
	this->setName(name);
	this->setHealth(health);
	this->setPower(power);
	this->setQuest(quest);
	this->backpack = inventory();

}

Hero::Hero() : GameCharacter()
{
	this->setQuest("Default Quest");
	this->backpack = inventory();
}

Hero::~Hero()
{
	for (int i = 0; i < backpack.getsize(); i++)
	{
		backpack.removeitem(i);
	}
}

void Hero::act()
{
	std::cout << this->getName() << " is acting!" << " (Heroicaly)" << std::endl;
	std::cout << "ur mom" << std::endl;
}

void Hero::speak()
{
	std::cout << "Hello, I am the hero of this game!" << std::endl;
	std::cout << "My name is " << this->getName() << std::endl;
	std::cout << "My health is " << this->getHealth() << std::endl;
	std::cout << "My power is " << this->getPower() << std::endl;
	std::cout << "My quest is " << this->getQuest() << std::endl;
}

void Hero::interactWith(GameCharacter* target)
{
	std::cout << this->getName() << " interacts with " << target->getName() << " (Heroicaly)" << std::endl;
	std::cout << "ur mom" << std::endl;
}

void Hero::trade(GameCharacter* target)
{
	std::cout << this->getName() << " trades with " << target->getName() << " (Heroicaly)" << std::endl;
	std::cout << "ur mom" << std::endl;
}

void Hero::attack(GameCharacter* target)
{
	std::cout << this->getName() << " is attacking!" << " (Heroicaly)" << std::endl;
	std::cout << "ur mom" << std::endl;
}

void Hero::setQuest(std::string quest)
{
	this->quest = quest;
}

std::string Hero::getQuest()
{
	return quest;
}

// backpack functions

void Hero::addItemToBackpack(Item item)
{
	backpack.additem(item);
}

void Hero::removeItemFromBackpack(Item item)
{
	backpack.removeitem(item);
}

int Hero::getBackPacksize()
{
	return backpack.getsize();
}