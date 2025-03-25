#include "GameCharacter.hpp"
#include "Interactable.hpp"
#include "Inventory.hpp"

class Hero : public GameCharacter, public Interactable
{
public:
	void act() override;
	void speak() override;
	void interactWith(GameCharacter) override;
	void trade(GameCharacter) override;
	void attack(GameCharacter) override;

private:
	std::string name;
	int health;
	int power;
	std::string quest;
};