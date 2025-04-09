#ifndef Interactable_HPP
#define Interactable_HPP
#include <string>
#include "GameCharacter.hpp"


class Interactable {
public:
	Interactable();
	Interactable(bool);
	virtual void interactWith(GameCharacter charAct);
	virtual void trade(GameCharacter charAct);
	virtual void attack(GameCharacter charAct);
	
	virtual ~Interactable();
private:

};
#endif // !Interactable_HPP
