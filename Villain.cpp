#include "Villain.hpp"

Villain::Villain() : name("joe"), health(100), power(100), evilPoints(100)
{
}

Villain::Villain(std::string name, int health, int power, int evilPoints)
{
}


void Villain::act()
{
}

void Villain::speak()
{
	std::cout << "Hello, I am the villain of this game!" << std::endl;
}

void Villain::interactWith( )
{
}

void Villain::trade( )
{
}

void Villain::attack( )
{
}
