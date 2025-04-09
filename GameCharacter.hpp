#ifndef GameCharacter_HPP
#define GameCharacter_HPP

#include "Interactable.hpp"
#include <iostream>
#include <string>

class GameCharacter : public Interactable
{
public:
	GameCharacter();
	GameCharacter(std::string name, int health, int power);
	virtual void act();
	virtual void speak();

	virtual void interactWith(GameCharacter* target) override;
	virtual void trade(GameCharacter* target) override;
	virtual void attack(GameCharacter* target) override;

	void setName(std::string name);
	std::string getName();

	void setHealth(int health); 
	int getHealth();

	void setPower(int power);
	int getPower();

private:
	std::string name;
	int health;
	int power;

};

#endif