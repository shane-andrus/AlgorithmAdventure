#ifndef NPC_HPP
#define NPC_HPP

#include "GameCharacter.hpp"
#include "Interactable.hpp"
#include <iostream> 

class NPC : public GameCharacter{
private:
	std::string role;
public:
    NPC();
    NPC(std::string name, int health, int powerlevel, std::string role);
    void act() override;
    void speak() override;
    void interactWithgameCharacter(GameCharacter&); // Matches Interactable
    void trade(GameCharacter&); // Matches GameCharacter
	void attack(GameCharacter&); 

};

#endif 