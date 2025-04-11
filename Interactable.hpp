//use ifndef for the header file to avoid multiple inclusion of the same file
#ifndef INTERACTABLE_HPP	
#define INTERACTABLE_HPP	

#include <iostream>

class GameCharacter; // Forward declaration

class Interactable
{
public:
	virtual void interactWithgameCharacter(GameCharacter& target) = 0;
	virtual void trade(GameCharacter& target) = 0;
	virtual void attack(GameCharacter& target) = 0;

};
#endif