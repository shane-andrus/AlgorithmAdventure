#include "Hero.hpp"

Hero::Hero(std::string name, int health, int powerLevel)
	: GameCharacter(name, health, powerLevel), quest("None") {
	std::cout << "Hero " << name << " created with health " << health << " and power level " << powerLevel << std::endl;
}

Hero::~Hero() {
	std::cout << "Hero " << name << " destroyed." << std::endl;
}

void Hero::act() {
	std::cout << name << " is on a quest!" << std::endl;
}

void Hero::speak() {
	std::cout << name << " says: \"For justice!\"" << std::endl;
}

void Hero::interactWith(GameCharacter* character) {
	std::cout << name << " interacts with " << character->getName() << std::endl;
}

void Hero::trade(GameCharacter* character) {
	std::cout << name << " trades with " << character->getName() << std::endl;
}

void Hero::attack(GameCharacter* character) {
	std::cout << name << " attacks " << character->getName() << "!" << std::endl;
	character->takeDamage(powerLevel);
}

void Hero::receiveQuest(std::string quest) {
	this->quest = quest;
	std::cout << name << " received a quest: " << quest << std::endl;
}