#ifndef VILLAIN_HPP
#define VILLAIN_HPP
#include "Interactable.hpp"
#include "GameCharacter.hpp"


class Villain : public GameCharacter
{
public:
	Villain();	
	Villain(std::string name, int health, int power, int evilPoints);
	void act() override;
	void speak() override;
	void interactWith(GameCharacter* target) override;
	void trade(GameCharacter* target) override;
	void attack(GameCharacter* target) override;
	
	void setEvilPoints(int evilPoints);
	int getEvilPoints();

private:
	int evilPoints;
	
};

#endif