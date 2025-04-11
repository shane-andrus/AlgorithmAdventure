#ifndef INTERACTABLE_HPP  
#define INTERACTABLE_HPP  

#include <iostream>  
#include <string>  
#include "NPC.hpp"  
#include "GameCharacter.cpp"  

class Interactable {  
public:  
   void interactWith(GameCharacter target);  
   void trade(GameCharacter target);  
   void attack(GameCharacter target);  
};  

#endif