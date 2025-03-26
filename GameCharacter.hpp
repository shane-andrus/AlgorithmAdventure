#ifndef GameCharacter_HPP
#define GameCharacter_HPP

#include "Interactable.hpp"
#include <iostream>
#include <string>

class GameCharacter
{
public:
	virtual void act() = 0;
	virtual void speak() = 0;

protected:
	std::string name;
	int health;
	int power;
	int power;

};

#endif