#ifndef HERO_HPP
#define HERO_HPP

#include "GameCharacter.hpp"
#include <iostream>

class Hero : public GameCharacter
{
public:
	Hero(std::string name, int health, int powerLevel);
	virtual ~Hero();
	void act() override;
	void speak() override;
	void interactWith(GameCharacter* character);
	void trade(GameCharacter* character);
	void attack(GameCharacter* character);

	void receiveQuest(std::string quest);

protected:
	std::string name;
	int health;
	int powerLevel;
	std::string quest;
};

#endif