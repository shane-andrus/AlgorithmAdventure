#include "Interactable.hpp"
#include "GameCharacter.hpp"

class NPC : public GameCharacter, public Interactable
{
public:
	void act() override;
	void speak() override;
	void interactWith(GameCharacter target) override;
	void trade(GameCharacter target) override;
	void attack(GameCharacter target) override;

private: 
	std::string role;
};