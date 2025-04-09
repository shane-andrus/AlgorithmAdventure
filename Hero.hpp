#ifndef HERO_HPP
#define HERO_HPP

#include "GameCharacter.hpp"
#include "Interactable.hpp"
#include "Inventory.hpp"

class Hero : public GameCharacter
{
public:
	Hero(std::string name, int health, int power, std::string quest);
	Hero();
	~Hero();
	void act() override;
	void speak() override;
	void interactWith(GameCharacter* target) override; // Fix: Changed parameter to pointer
	void trade(GameCharacter* target) override;
	void attack(GameCharacter* target) override;

	//Invintory functions
	void addItemToBackpack(Item item);
	void removeItemFromBackpack(Item item);
	int getBackPacksize();


	void setQuest(std::string quest);
	std::string getQuest();

private:
	std::string quest;
	inventory backpack;
};

#endif