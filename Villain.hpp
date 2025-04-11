#ifndef VILLAIN_HPP
#define VILLAIN_HPP

#include "GameCharacter.hpp"	
#include <iostream>

class Villain : public GameCharacter
{
private:
	int health;
	int evilPoints;

public:
	Villain(std::string, int , int);
	void act();
	void speak();
	void interactWithgameCharacter(GameCharacter& target);
	void trade(GameCharacter& target);
	void attack(GameCharacter& target);
};
#endif