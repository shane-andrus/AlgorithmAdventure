#include "Villain.hpp""
#include <iostream>

void Villain::act()
{
	std::cout << name << " is plotting to take over the world." << std::endl;
}

void Villain::speak()
{
	std::cout << name << ": I heard that you are the saver of this world. Let me see if you are worth the title!" << std::endl;
}

void Villain::interact(gameCharacter* target)
{
	std::cout << name << " interacts with " << target->getName() << std::endl;
	std::cout << name << ": What are you trying to do?" << std::endl;
}

void Villain::trade(gameCharacter* target)
{
	std::cout << name << " trades with " << target->getName() << std::endl;
	std::cout << name << ": You can trade with your soul to get great powers." << std::endl;
}

void Villain::attack(gameCharacter* target)
{
	std::cout << name << " attacks " << target->getName() << std::endl;
	std::cout << target->getName() << ": HAHAHA! Let's start a bettle!" << std::endl;
}
