#include "Hero.hpp"

Hero::Hero(const std::string& name, int health, int powerLevel, const std::string& quest)
	: GameCharacter(name, health, powerLevel), quest(quest) {
}

std::string Hero::getQuest() const {
	return quest;
}

void Hero::act() {
	std::cout << getName() << "places blocks and crap" << std::endl;
}

void Hero::speak() {
	std::cout << getName() << ": CHICKEN JOCKEY" << std::endl;
}

void Hero::addItemToInventory(const Item& item)
{
	inventory.addItem(item);
}

void Hero::removeItemFromInventory(const std::string& itemName)
{
	inventory.removeItem(itemName);
}

void Hero::showInventory() const
{
	inventory.printItems();
}

std::string Hero::getName() const {
	return GameCharacter::getName();
}

int Hero::getHealth() const {
	return GameCharacter::getHealth();
}

int Hero::getPowerLevel() const {
	return GameCharacter::getPowerLevel();
}

void Hero::interactWith(GameCharacter* target) {
	std::cout << getName() << " unties the shoelaces of " << target->getName() << std::endl;
}

void Hero::trade(GameCharacter* target) {
	std::cout << getName() << " gives " << target->getName() << " crisp high five" << std::endl;
	std::cout << target->getName() << " gives back " << getName() << " nothing, because capitalism " << std::endl;
}

void Hero::attack(GameCharacter* target) {
	std::cout << getName() << " roundhouse kicks " << target->getName() << std::endl;
	std::cout << target->getName() << " takes " << getPowerLevel() << " damage!" << std::endl;
	target->setHealth(target->getHealth() - getPowerLevel());
}