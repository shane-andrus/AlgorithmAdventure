#include "NPC.hpp"
#include "GameCharacter.hpp"
#include "Interactable.hpp"



NPC::NPC(std::string role, std::string name)
{
	this->role = role;
	this->setName(name);
	this->setHealth(100);
	this->setPower(50);
}

NPC::NPC()
{
	this->role = "Default Role";
}



void NPC::speak()
{
	std::cout << "Hello, I am an NPC in this game!" << std::endl;
	std::cout << "My name is " << this->getName() << std::endl;
	std::cout << "My health is " << this->getHealth() << std::endl;
	std::cout << "My power is " << this->getPower() << std::endl;
	std::cout << "My role is " << this->getRole() << std::endl;
}


void NPC::act()
{
	std::cout << this->getName() << " is acting!" << std::endl;
	std::cout << "ur mom" << std::endl;
}

void NPC::interactWith(GameCharacter* target)
{
	std::cout << this->getName() << " interacts with " << target->getName() << std::endl;
	std::cout << "ur mom" << std::endl;
}

void NPC::trade(GameCharacter* target)
{
	std::cout << this->getName() << " trades with " << target->getName() << std::endl;
	std::cout << "ur mom" << std::endl;
}

void NPC::attack(GameCharacter* target) //chicken jocky
{
	std::cout << this->getName() << " is attacking!" << std::endl;
	std::cout << "ur mom" << std::endl;
}

void NPC::setRole(std::string role)
{
	this-> role = role;
}

std::string NPC::getRole()
{
	return this -> role;
}