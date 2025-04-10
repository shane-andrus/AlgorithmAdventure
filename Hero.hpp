#ifndef HERO_HPP  
#define HERO_HPP  

#include <string> 
#include <iostream>
#include "GameCharacter.hpp"  
#include "Interactable.hpp"  
#include "Inventory.hpp"  

class Hero : public gameCharacter {  
protected:  
std::string quest;  
Inventory inventory; // Inventory for the hero

public:  

void act();  
void speak();  
void interact(gameCharacter* target);  
void trade(gameCharacter* target);  
void attack(gameCharacter* target);  
Hero(std::string n, int h, int p); // Constructor  
Hero();// Default constructor  
};

#endif // HERO_HPP