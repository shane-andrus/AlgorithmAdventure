#include <iostream>

#include "Villain.hpp"

Villian::Villian() : GameCharacter("John", 100, 0)
{
}

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

void Villian::trade(GameCharacter& target)
{
	//implement
}

void Villian::attack(GameCharacter& target)
{
	//implement
}

int Villian::getEvilPoints()
{
	return evilPoints;
}

void Villian::setEvilPoints(int evilPoints)
{
	this->evilPoints = evilPoints;
}
