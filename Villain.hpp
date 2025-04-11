#ifndef VILLAIN_HPP
#define VILLAIN_HPP

#include <string>

#include "GameCharacter.hpp"
#include "Interactable.hpp"
#include "Inventory.hpp"

class Villian : public GameCharacter, public Interactible
{
private:
	int evilPoints;
public:
	Villian(std::string, int, int);
	void act();
	void speak();
	void interactWith(GameCharacter& target);
	void trade(GameCharacter& target, int, int);
	void attack(GameCharacter& target);
	int getEvilPoints();
	void setEvilPoints(int);
};

#endif