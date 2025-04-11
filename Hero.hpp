#ifndef HERO_HPP
#define HERO_HPP

#include <string>

#include "GameCharacter.hpp"
#include "Interactable.hpp"
#include "Inventory.hpp"

class Hero : public GameCharacter, public Interactible
{
private:
	std::string quest;
public:
	Hero(std::string, int);
	void act();
	void speak();
	void interactWith(GameCharacter& target);
	void trade(GameCharacter& target, int, int);
	void attack(GameCharacter& target);
	std::string getQuest();
	void setQuest(std::string);
	virtual ~Hero();
};

#endif