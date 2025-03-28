#ifndef NPC_HPP
#define NPC_HPP

#include <string>

#include "GameCharacter.hpp"
#include "Interactable.hpp"

class NPC : public GameCharacter, public Interactible
{
private:
	std::string role;
public:
	NPC();
	NPC(std::string, int, std::string);
	void act();
	void speak();
	void interactWith(GameCharacter& target);
	void trade(GameCharacter& target);
	void attack(GameCharacter& target);
	std::string getRole();
	void setRole(std::string);
};

#endif