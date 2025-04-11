#include "NPC.hpp"

NPC::NPC(const std::string& name, int health, int powerLevel, const std::string& role)
	: GameCharacter(name, health, powerLevel), role(role) {
}

std::string NPC::getRole() const {
	return role;
}

void NPC::act() {
	std::cout << getName() << "stands there with their arms folded" << std::endl;
}

void NPC::speak() {
	std::cout << getName() << ": hrrmm... ha... hrrmm..." << std::endl;
}

std::string NPC::getName() const {
	return GameCharacter::getName();
}

int NPC::getHealth() const {
	return GameCharacter::getHealth();
}

int NPC::getPowerLevel() const {
	return GameCharacter::getPowerLevel();
}
void NPC::setHealth(int health) {
	this->health = health;
}

void NPC::interactWith(GameCharacter* target) {
	std::cout << getName() << "stands there staring at " << target->getName() << " with their arms folded" << std::endl;
}

void NPC::trade(GameCharacter* target) {
	std::cout << getName() << " gives " << target->getName() << " six loafs of bread" << std::endl;
	std::cout << target->getName() << " gives " << getName() << " one emerald" << std::endl;
}

void NPC::attack(GameCharacter* target) {
	std::cout << getName() << " roundhouse kicks " << target->getName() << std::endl;
	std::cout << target->getName() << " takes " << getPowerLevel() << " damage!" << std::endl;
	target->setHealth(target->getHealth() - getPowerLevel());
}