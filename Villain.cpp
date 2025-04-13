#include "Villain.hpp"
#include <iostream>

Villain::Villain(const std::string& name, int health, int powerLevel, int evilPoints)
	: GameCharacter(name, health, powerLevel), evilPoints(evilPoints) {
}

int Villain::getEvilPoints() const {
	return evilPoints;
}

void Villain::act() {
	std::cout << getName() << " is twirling their mustache VERY menacingly!" << std::endl;
}

void Villain::speak() {
	std::cout << "You stupid little nugget, I will plunge the world into darkness! WAAAA!" << std::endl;
}

std::string Villain::getName() const {
	return GameCharacter::getName();
}

int Villain::getHealth() const {
	return GameCharacter::getHealth();
}

int Villain::getPowerLevel() const {
	return GameCharacter::getPowerLevel();
}

void Villain::interactWith(GameCharacter* target) {
	std::cout << getName() << " slaps " << target->getName() << " with a fish!" << std::endl;
}

void Villain::trade(GameCharacter* target) {
	std::cout << getName() << " gives " << target->getName() << " a big soggy walffle!" << std::endl;
	std::cout << target->getName() << " gives " << getName() << " twelve dollars!" << std::endl;
}

void Villain::attack(GameCharacter* target) {
	std::cout << getName() << " roundhouse kicks " << target->getName() << std::endl;
	std::cout << target->getName() << " takes " << getPowerLevel() << " damage!" << std::endl;
	target->setHealth(target->getHealth() - getPowerLevel());
}