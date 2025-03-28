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
	Inventory inventory;
public:
	Hero();
	Hero(std::string, int);
	void act();
	void speak();
	void interactWith(GameCharacter& target);
	void trade(GameCharacter& target);
	void attack(GameCharacter& target);
	std::string getQuest();
	void setQuest(std::string);
	Inventory getInventory();
};

#endif