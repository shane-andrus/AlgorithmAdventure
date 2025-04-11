#ifndef NPC_HPP  
#define NPC_HPP  

#include <string>  
#include "GameCharacter.hpp"  

class Npc : public gameCharacter {  
protected:  
   std::string role;  
public:  
	void setRole();
	std::string getRole() const { return role; }
   void act();  
   void speak();  
   void interact(gameCharacter* target);  
   void trade(gameCharacter* target);  
   void attack(gameCharacter* target);  
   Npc(std::string n, int h, int p) : gameCharacter(n, h, p), role("Villager") {} // Constructor
   Npc() : gameCharacter("NPC", 100, 10), role("Villager") {} // Default constructor
   bool operator==(const Npc& other) const {
	   return name == other.name && health == other.health && powerlevel == other.powerlevel && role == other.role;
   }
};  
#endif