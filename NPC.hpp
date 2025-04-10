#ifndef NPC_HPP  
#define NPC_HPP  

#include <string>  
#include "GameCharacter.hpp"  
#include "Interactable.hpp"  

class Npc : public gameCharacter, public interactable {  
protected:  
   std::string role;  
public:  
	void setRole();
   void act();  
   void speak();  
   void interact(gameCharacter* target);  
   void trade(gameCharacter* target);  
   void attack(gameCharacter* target);  
   Npc(std::string n, int h, int p) : gameCharacter(n, h, p), role("Villager") {} // Constructor
   Npc() : gameCharacter("NPC", 100, 10), role("Villager") {} // Default constructor
};  
#endif