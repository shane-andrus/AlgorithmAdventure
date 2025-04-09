#include "Villain.hpp"

Villain::Villain(std::string name, int health, int powerLevel, int evilPoints)
	: GameCharacter(name, health, powerLevel), evilPoints(0) {
	std::cout << "Villain " << name << " created with health " << health << " and power level " << powerLevel << std::endl;
}

Villain::~Villain() {
	std::cout << "Villain " << name << " destroyed." << std::endl;
}

void Villain::act() {
	std::cout << name << " is plotting evil deeds!" << std::endl;
}

void Villain::speak() {
	std::cout << name << "You will never stop me!" << std::endl;
}

void Villain::interactWith(GameCharacter* character) {
	std::cout << name << " interacts with " << character->getName() << std::endl;
}

void Villain::trade(GameCharacter* character) {
	std::cout << name << " makes a dark deal with " << character->getName() << std::endl;
	evilPoints += 10;
	std::cout << name << "Just earned 10 evil points! " << name << "may visit a local evil credit union to redeem evil points for evil rewards." << std::endl;
}

void Villain::attack(GameCharacter* character) {
	std::cout << name << " attacks " << character->getName() << "!" << std::endl;
	character->takeDamage(powerLevel);
}