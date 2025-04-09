#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

class GameCharacter; // Forward declaration of GameCharacter class

class Interactable
{
public:

	virtual void interactWith(GameCharacter* target) = 0;

	virtual void trade(GameCharacter* target) = 0;

	virtual void attack(GameCharacter* target) = 0;

};

#endif