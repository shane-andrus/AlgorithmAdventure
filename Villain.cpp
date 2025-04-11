#include "Villain.hpp"
#include <iostream>
#include <string>

Villain::Villain(std::string name, int health, int evilpoints)
	: GameCharacter(name, health, 0), evilPoints(evilpoints) {
}


void Villain::act() {
	std::cout << "I do something evil" << std::endl;
}

void Villain::speak() {
	std::cout << "I am evil" << std::endl;
}
void Villain::interactWithgameCharacter(GameCharacter& target)
{
}


void Villain::trade(GameCharacter& target) {
	std::cout << "I'm not trading! I will kill you!" << std::endl;
}

void Villain::attack(GameCharacter& target) {
	std::cout << "I attack you!" << std::endl;
}
