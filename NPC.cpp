#include <iostream>

#include "NPC.hpp"

// Default Constructor
NPC::NPC() : GameCharacter("John", 100, 1), role("TBD")
{
}

// Constructor Overloading
NPC::NPC(std::string name) : GameCharacter(name, 100, 1), role("TBD")
{
}

// Constructor Overloading
NPC::NPC(std::string name, int powerLevel) : GameCharacter(name, 100, powerLevel), role("TBD")
{
}

// Constructor Overloading
NPC::NPC(std::string name, int powerLevel, std::string role) : GameCharacter(name, 100, powerLevel), role(role)
{
}

void NPC::act()
{
	std::cout << name << " walks up." << std::endl;
}

void NPC::speak()
{
	std::cout << "Strangers from distant lands, friends of old" << std::endl;
}

void NPC::interactWith(GameCharacter& target)
{
	act();
	speak();
	target.act();
	target.speak();
}

// Swaps inventory items with another GameCharacter
void NPC::trade(GameCharacter& target, int inventoryIndexThis, int inventoryIndexOther)
{
	Item thisItem = Item(inventory.getItem(inventoryIndexThis).getName(), inventory.getItem(inventoryIndexThis).getValue());
	Item otherItem = Item(target.getInventory().getItem(inventoryIndexOther).getName(), target.getInventory().getItem(inventoryIndexOther).getValue());
	inventory.addItem(otherItem);
	inventory.removeItem(thisItem);
	target.getInventory().addItem(thisItem);
	target.getInventory().removeItem(otherItem);
}

// Decreases the health of another GameCharacter by the NPC's power level
void NPC::attack(GameCharacter& target)
{
	target.setHealth(target.getHealth() - powerLevel*0.5);
}

std::string NPC::getRole()
{
	return role;
}

void NPC::setRole(std::string role)
{
	this->role = role;
}

NPC::~NPC()
{
}
