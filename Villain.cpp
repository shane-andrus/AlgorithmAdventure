#include "Villain.hpp"

Villain::Villain(std::string name, int health, int power, int evilPoints): GameCharacter(name, health, power), evilPoints(evilPoints)
{}

Villain::Villain() : GameCharacter()
{
	evilPoints = 0;
}


void Villain::act()
{
	std::cout << this->getName() << " is acting!" << " (Evily)" << std::endl;
	std::cout << "ur mom" << std::endl;
}

void Villain::speak()
{
	std::cout << "Hello, I am the villain of this game!" << std::endl;
	std::cout << "My name is " << this->getName() << std::endl;
	std::cout << "My health is " << this->getHealth() << std::endl;
	std::cout << "My power is " << this->getPower() << std::endl;
	std::cout << "My Evil points is " << this->getEvilPoints() << std::endl;
}

void Villain::interactWith(GameCharacter* target)
{
	std::cout << this->getName() << " interacts with " << target->getName() << " (Evily)" << std::endl;
	std::cout << "ur mom" << std::endl;
}

void Villain::trade(GameCharacter* target)
{
	std::cout << this->getName() << " trades with " << target->getName() << " (Evily)" << std::endl;
	std::cout << "ur mom" << std::endl;
}

void Villain::attack(GameCharacter* target)
{
	std::cout << this->getName() << " is attacking!" << " (Evily)" << std::endl;
	std::cout << "ur mom" << std::endl;
}

void Villain::setEvilPoints(int evilPoints)
{
	this->evilPoints = evilPoints;
}

int Villain::getEvilPoints()
{
	return this-> evilPoints;
}
