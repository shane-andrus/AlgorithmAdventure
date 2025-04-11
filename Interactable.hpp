#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include <string>

class gameCharacter; // Forward declaration

class interactable {
public:
	virtual void interact(gameCharacter*) = 0;
	virtual void trade(gameCharacter*) = 0;
	virtual void attack(gameCharacter*) = 0;
};
// This is an abstract class that defines the interface for interactable objects
#endif