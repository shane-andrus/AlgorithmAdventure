#ifndef VILLAIN_HPP
#define VILLAIN_HPP
#include "Interactable.hpp"
#include "GameCharacter.hpp"


class Villain : public GameCharacter, public Interactable
{
public:
	Villain();	
	Villain(std::string name, int health, int power, int evilPoints);
	void act() override;
	void speak() override;
	void interactWith( ) override;
	void trade( ) override;
	void attack( ) override;
	
};

#endif