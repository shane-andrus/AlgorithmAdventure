#ifndef VILLAIN_HPP
#define VILLAIN_HPP

#include "GameCharacter.hpp"
#include "Interactable.hpp"

class Villain : public gameCharacter, public interactable {
protected:
	int evilPoints;
public:
	void act();
	void speak();
	void interact(gameCharacter* target);
	void trade(gameCharacter* target);
	void attack(gameCharacter* target);
};
#endif