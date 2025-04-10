#ifndef GAMECHARACTER_HPP
#define GAMECHARACTER_HPP

#include <string>
#include "Interactable.hpp"


class gameCharacter: public interactable {  
protected:  
std::string name;  
int health;  
int powerlevel;  

public:
	gameCharacter();  
	// Getters and Setters
	std::string getName() const;
	int getHealth() const;
	int getPowerLevel() const;
	void setName(const std::string& n) { name = n; }  
	void setHealth(int h) { health = h; }  
	void setPowerLevel(int p) { powerlevel = p; }  

	gameCharacter(const std::string& n, int h, int p);

};


#endif