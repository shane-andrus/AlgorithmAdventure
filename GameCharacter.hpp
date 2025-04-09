#include <iostream>
#include <string> 

#ifndef GAMECHARACTER_HPP
#define GAMECHARACTER_HPP


class GameCharacter {
protected:
	std::string name;
	std::int health;
	std::int powerLevel;

public:
	GameCharacter(std::string, std::int, std::int);
	abstract void act();
	abstract void speak();
};

#endif