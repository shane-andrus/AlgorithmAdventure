#include <iostream>

#include "Hero.hpp"
#include "Item.hpp"

Hero::Hero() : GameCharacter("John", 100, 1), quest("TBD")
{
}

Hero::Hero(std::string name) : GameCharacter(name, 100, 1), quest("TBD")
{
}

Hero::Hero(std::string name, int powerLevel) : GameCharacter(name, 100, powerLevel), quest("TBD")
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

void Hero::trade(GameCharacter& target, int inventoryIndexThis, int inventoryIndexOther)
{
	Item thisItem = Item(inventory.getItem(inventoryIndexThis).getName(), inventory.getItem(inventoryIndexThis).getValue());
	Item otherItem = Item(target.getInventory().getItem(inventoryIndexOther).getName(), target.getInventory().getItem(inventoryIndexOther).getValue());
	inventory.addItem(otherItem);
	inventory.removeItem(thisItem);
	target.getInventory().addItem(thisItem);
	target.getInventory().removeItem(otherItem);
}

void Hero::attack(GameCharacter& target)
{
	target.setHealth(target.getHealth() - powerLevel);
}

std::string Hero::getQuest()
{
	return quest;
}

void Hero::setQuest(std::string quest)
{
	this->quest = quest;
}
