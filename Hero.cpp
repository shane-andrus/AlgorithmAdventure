#include "Hero.hpp"
#include "GameCharacter.hpp"
#include "Interactable.hpp"
#include <iostream>

void Hero::setQuest()
{
	std::string quest;
	std::cout << "Enter a quest for the hero: ";
	std::getline(std::cin, quest);
	std::cout << "Quest set to: " << quest << std::endl;
}

void Hero::act()
{
	std::cout << name << " helps the people in the village, Reputation points +10 !" << std::endl;
}

void Hero::speak()
{
	std::cout << name << ": I will protect this world from the evil villain!" << std::endl;
}

void Hero::interact(gameCharacter* target)
{
	std::cout << name << " interacts with " << target->getName() << std::endl;
}

void Hero::trade(gameCharacter* target)
{
	std::cout << name << " trades with " << target->getName() << std::endl;
}

void Hero::attack(gameCharacter* target)
{
	std::cout << name << " attacks " << target->getName() << std::endl;
}

Hero::Hero(std::string n, int h, int p)
{
}

Hero::Hero() : gameCharacter("Firefly", 100, 10), quest("Save the world"), inventory()
{
}
