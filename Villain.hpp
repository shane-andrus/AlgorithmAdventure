#ifndef VILLIAN_HPP
#define VILLIAN_HPP

#include <iostream>
#include <string>
#include "GameCharacter.hpp"



class Villain {
protected:
	int evilPoints;

public:
	Villain(int);

	void act();
	void speak();
	void interactWith(GameCharacter target);
	void trade(GameCharacter target);
	void attack(GameCharacter target);

};

#endif 