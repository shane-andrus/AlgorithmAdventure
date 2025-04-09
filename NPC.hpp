#ifndef NPC_HPP
#define NPC_HPP
#include "GameCharacter.hpp"


class NPC : public GameCharacter
{
public:
	NPC(std::string role, std::string name);
	NPC();
	void act() override;
	void speak() override;
	void interactWith(GameCharacter* target) override;
	void trade(GameCharacter* target) override;
	void attack(GameCharacter* target) override;

	std::string getRole();
	void setRole(std::string role);

private: 
	std::string role;

};
#endif