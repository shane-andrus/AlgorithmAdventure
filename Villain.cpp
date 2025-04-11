#include "Villain.hpp""
#include <iostream>

void Villain::act()
{
	std::cout << name << " is plotting to take over the world." << std::endl;
}

void Villain::speak()
{
	std::cout << name << ": I am " + name + ", the one who will set the world ablaze." << std::endl;
}

void Villain::interact(gameCharacter* target)
{
	std::cout << name << " interacts with " << target->getName() << std::endl;
	std::cout << name << ": What are you trying to do? Stay away from me!" << std::endl;
}

void Villain::trade(gameCharacter* target)
{
	std::cout << name << " trades with " << target->getName() << std::endl;
	std::cout << name << ": You can trade with your soul to get great powers." << std::endl;
}

void Villain::attack(gameCharacter* target)
{
	std::cout << name << " attacks " << target->getName() << std::endl;
	std::cout << name << ": HAHAHA! Let's start a bettle!" << std::endl;
}
