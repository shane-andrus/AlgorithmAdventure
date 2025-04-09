#ifndef VILLAIN_HPP
#define VILLAIN_HPP

#include "GameCharacter.hpp"
#include <string>
#include <iostream>

class Villain : public GameCharacter {
public:
	Villain(std::string name, int health, int powerLevel, int evilPoints);
	virtual ~Villain();

	void act() override;
	void speak() override;
	void interactWith(GameCharacter* character);
	void trade(GameCharacter* character);
	void attack(GameCharacter* character);

protected:
	int evilPoints;
};

#endif