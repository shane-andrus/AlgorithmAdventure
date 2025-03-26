#include "GameCharacter.hpp"


class NPC : public GameCharacter, public Interactable
{
public:
	NPC(std::string role);
	NPC();
	void act() override;
	void speak() override;
	void interactWith() override;
	void trade() override;
	void attack() override;

private: 
	std::string role;

};