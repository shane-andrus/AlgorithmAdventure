#include <iostream>
#include <string> 
#include <"NPC.hpp"> 


#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

class Interactable {
public:
	interactWith(GameCharacter target);
	trade(GameCharacter target);
	attack(GameCharacter target);
};



#endif