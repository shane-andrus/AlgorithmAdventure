#ifndef GAMECHARACTER_HPP
#define GAMECHARACTER_HPP

#include <string>
#include "Interactable.hpp"


class gameCharacter {  
protected:  
std::string name;  
int health;  
int powerlevel;  
public:  
gameCharacter();  
gameCharacter(std::string n, int h, int p) : name(n), health(h), powerlevel(p) {}  

// Getters and Setters
std::string getName() const;
int getHealth() const;
int getPowerLevel() const;
void setName(const std::string& n) { name = n; }  
void setHealth(int h) { health = h; }  
void setPowerLevel(int p) { powerlevel = p; }  

virtual void act() = 0; // Pure virtual function for acting  
virtual void speak() = 0; // Pure virtual function for speaking  
};


#endif