#include <iostream>
#include <string>

#ifndef NPC_HPP
#define NPC_HPP

class NPC {
protected:
	std::string role;

public:
	HPC(std::string);

	act();
	speak();
	interactWith(GameCharacter target);
	trade(GameCharacter target);
	attack(GameCharacter target);
};

#endif