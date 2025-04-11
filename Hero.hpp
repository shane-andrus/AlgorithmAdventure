#ifndef HERO_HPP
#define HERO_HPP

#include <iostream>
#include <string>
#include "GameCharacter.hpp"


class Hero {
protected:
	std::string quest;

public:
	Hero(std::string);

	void act();
	void speak();
	void interactWith(GameCharacter target);
	void trade(GameCharacter target);
	void attack(GameCharacter target);
};

#endif