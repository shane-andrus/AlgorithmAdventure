#include <iostream>

#include "Villain.hpp"

// Default Constructor
Villian::Villian() : GameCharacter("John", 100, 1), evilPoints(1)
{
}

// Constructor Overloading
Villian::Villian(std::string name) : GameCharacter(name, 100, 1), evilPoints(1)
{
}

// Constructor Overloading
Villian::Villian(std::string name, int powerLevel, int evilPoints) : GameCharacter(name, 100, powerLevel), evilPoints(evilPoints)
{
}

void Villian::act()
{
	std::cout << name << " glares, their eyes flaming red" << std::endl;
}

void Villian::speak()
{
	std::cout << "So . . . you have chosen death" << std::endl;
}

void Villian::interactWith(GameCharacter& target)
{
	act();
	speak();
	target.act();
	target.speak();
}

// Swaps inventory items with another GameCharacter
void Villian::trade(GameCharacter& target, int inventoryIndexThis, int inventoryIndexOther)
{
	Item thisItem = Item(inventory.getItem(inventoryIndexThis).getName(), inventory.getItem(inventoryIndexThis).getValue());
	Item otherItem = Item(target.getInventory().getItem(inventoryIndexOther).getName(), target.getInventory().getItem(inventoryIndexOther).getValue());
	inventory.addItem(otherItem);
	inventory.removeItem(thisItem);
	target.getInventory().addItem(thisItem);
	target.getInventory().removeItem(otherItem);
}

// Polymorphism: All game characters can attack. Most decrease the target's health by their powerlevel. Villians decrease the target's health by their powerlevel multiplied by their evil points
void Villian::attack(GameCharacter& target)
{
	target.setHealth(target.getHealth() - powerLevel*evilPoints);
}

int Villian::getEvilPoints()
{
	return evilPoints;
}

void Villian::setEvilPoints(int evilPoints)
{
	this->evilPoints = evilPoints;
}
