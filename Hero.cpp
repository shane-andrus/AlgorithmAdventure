#include "Hero.hpp"
#include "GameCharacter.hpp"
#include "Interactable.hpp"
#include <iostream>

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
