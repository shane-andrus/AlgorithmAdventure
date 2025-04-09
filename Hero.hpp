#include <iostream>
#include <string>

#ifndef HERO_HPP
#define HERO_HPP

class Hero {
protected:
	std::string quest;

public:
	Hero(std::string);

	act();
	speak();
	interactWith(GameCharacter target);
	trade(GameCharacter target);
	attack(GameCharacter target);
};

#endif