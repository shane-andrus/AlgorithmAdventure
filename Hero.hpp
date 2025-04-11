#ifndef HERO_HPP
#define HERO_HPP	

#include "GameCharacter.hpp"
#include "Inventory.hpp"
#include <iostream>

class Hero : public GameCharacter {
private:
	Inventory inventory;

public:
	Hero(std::string, int, int);
	void act() override;
	void speak()override;
	void interactWithgameCharacter(GameCharacter& target);
	void trade(GameCharacter& target);
	void attack(GameCharacter& target);
	//void addItem(Item item);
	//void removeItem(Item item);
	
}

;
#endif