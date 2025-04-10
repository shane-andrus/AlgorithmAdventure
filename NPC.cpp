#include "NPC.hpp"
#include <iostream>

NPC::NPC(std::string name, int health, int powerLevel, std::string role)
	: GameCharacter(name, health, powerLevel), role(role) {
	std::cout << "NPC " << role << " " << name << "  created with health " << health << " and power level " << powerLevel << std::endl;
}

NPC::~NPC() {
	std::cout << "NPC " << role << " " << name << " destroyed." << std::endl;
}

void NPC::act() {
	std::cout << name << " is performing their " << role << "-ly duties AND THEN DOES A BACKFLIP!" << std::endl;
}

void NPC::speak() {
	std::cout << name << " says: Hello, traveler! I am a " << role << "." << std::endl;
}

void NPC::attack(GameCharacter* character) {
	std::cout << name << " attacks " << character->getName() << " with a weak punch!" << std::endl;
	character->takeDamage(5);
}

void NPC::interactWith(GameCharacter* character) {
	std::cout << name << " stares blankly at " << character->getName() << std::endl;
}

void NPC::trade(GameCharacter* character) {
	std::cout << name << " offers a trade to " << character->getName() << std::endl;
}

std::string NPC::giveQuest(GameCharacter* character) {
	std::cout << name << " gives a quest to " << character->getName() << std::endl;
	return "Find the lost treasure!";
}

std::string NPC::getRole() const
{
	return std::string();
}

std::string NPC::getName() const
{
	return std::string();
}

int NPC::getHealth() const
{
	return 0;
}

int NPC::getPowerLevel() const
{
	return 0;
}
