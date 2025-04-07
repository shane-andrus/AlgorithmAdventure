#ifndef INTERACTIBLE_HPP
#define INTERACTIBLE_HPP

#include "GameCharacter.hpp"

class Interactible {
public:
	virtual void interactWith(GameCharacter target) = 0;
	virtual void trade(GameCharacter target, int, int) = 0;
	virtual void attack(GameCharacter target) = 0;
};

#endif