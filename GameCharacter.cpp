#include "GameCharacter.hpp"
#include <iostream>


// MyClass::MyClass(int value) : m_value(value) {}

GameCharacter::GameCharacter(std::string name, int health, int powerLevel)
{
}

void GameCharacter::healthDrain(int damage)
{
	extern int health;
	health = health - damage;
};


void GameCharacter::act()
{
	std::cout << name << " is acting." << std::endl;
};


void GameCharacter::speak()
{
	std::cout << name << " says: Hello!" << std::endl;
};


