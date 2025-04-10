#ifndef VILLAIN_HPP
#define VILLAIN_HPP

#include "GameCharacter.hpp"
#include "Interactable.hpp"

class Villain : public gameCharacter {
protected:
	int evilPoints;
public:
	void act();
	void speak();
	void interact(gameCharacter* target);
	void trade(gameCharacter* target);
	void attack(gameCharacter* target);
	Villain(std::string n, int h, int p) : gameCharacter(n, h, p), evilPoints(100) {} // Constructor
	Villain() : gameCharacter("Villain", 100, 10), evilPoints(100) {} // Default constructor
};
#endif