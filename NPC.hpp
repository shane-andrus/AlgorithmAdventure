#include <iostream>
#include <string>
#include "GameCharacter.hpp"

#ifndef NPC_HPP
#define NPC_HPP

class NPC {
protected:
	std::string role;

public:
	NPC(std::string);

	void act();
	void speak();
	void interactWith(GameCharacter target);
	void trade(GameCharacter target);
	void attack(GameCharacter target);
};

#endif