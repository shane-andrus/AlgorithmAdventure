#include "hero.hpp"
Hero::Hero() : GameCharacter("Hero", 100, 10), Interactable(false) {
}
Hero::Hero(std::string name, int health, int powerlevel) : GameCharacter(name, health, powerlevel), Interactable(false) {
}
Hero::Hero(std::string name, int health, int powerlevel, bool interact) : GameCharacter(name, health, powerlevel), Interactable(interact) {
}
void Hero::speak() {
	std::cout << "I am a hero!" << std::endl;
}
void Hero::act() {
	std::cout << "I will save the day!" << std::endl;
}
std::string Hero::getName() {
	return GameCharacter::getName();
}
int Hero::getHealth() {
	return GameCharacter::getHealth();
}
int Hero::getPowerLevel() {
	return GameCharacter::getPowerLevel();
}
void Hero::interactWith(GameCharacter& charAct) {
	std::cout << "Interacting with " << charAct.getName() << std::endl;
}
void Hero::trade(GameCharacter& charAct) {
	std::cout << "Trading with " << charAct.getName() << std::endl;
}
void Hero::attack(GameCharacter& charAct) {
	std::cout << "Attacking " << charAct.getName() << std::endl;
}
Hero::~Hero() {
}
