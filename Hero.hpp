#ifndef HERO_HPP  
#define HERO_HPP  

#include <string> 
#include <iostream>
#include "GameCharacter.hpp"  
#include "Interactable.hpp"  
#include "Inventory.hpp"  

class Hero : public gameCharacter, public interactable {  
protected:  
std::string quest;  
Inventory inventory;  

public:  
void act();  
void speak();  
void interact(gameCharacter* target);  
void trade(gameCharacter* target);  
void attack(gameCharacter* target);  
Hero(std::string n, int h, int p) : gameCharacter(n, h, p), quest("Save the world") {} // Constructor  
Hero() : gameCharacter("Hero", 100, 10), quest("Save the world") {} // Default constructor  
};

#endif // HERO_HPP