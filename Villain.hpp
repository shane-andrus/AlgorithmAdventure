#ifndef VILLAIN_HPP
#define VILLAIN_HPP

#include <string>

#include "GameCharacter.hpp"
#include "Interactable.hpp"

class Villian : public GameCharacter, public Interactible
{
private:
	std::string Name;
	int health;
	int powerLevel;
	int evilPoints;
public:
	Villian();
	Villian(std::string, int, int);
	void act();
	void speak();
	void interactWith(GameCharacter& target);
	void trade(GameCharacter& target);
	void attack(GameCharacter& target);
	int getEvilPoints();
	void setEvilPoints(int);
};

#endif