#include "NPC.hpp"
#include <iostream>
#include "GameCharacter.hpp"

void Npc::setRole()
{
	std::cout << "Enter a role for the NPC: ";
	std::cin >> role;
}

void Npc::act()
{
	std::cout << name << " is working at their station." << std::endl;
}

void Npc::speak()
{
	std::cout << name << ": Hello, traveler! Welcome to our village." << std::endl;
}

void Npc::interact(gameCharacter* target)
{
	std::cout << name << " interacts with " << target->getName() << std::endl;
	std::cout << target->getName() << ": Hello, " << name << "! What can I do for you?" << std::endl;
}

void Npc::trade(gameCharacter* target)
{
	std::cout << name << " trades with " << target->getName() << std::endl;
	std::cout << target->getName() << ": I have some good stuff!" << std::endl;
}

void Npc::attack(gameCharacter* target)
{
	std::cout << name << " attacks " << target->getName() << std::endl;
	std::cout << target->getName() << ": Why are you attacking me?!" << std::endl;
}