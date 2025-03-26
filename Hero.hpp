#include "GameCharacter.hpp"
#include "Interactable.hpp"
#include "Inventory.hpp"

class Hero : public GameCharacter, public Interactable
{
public:
	Hero(std::string name, int health, int power, std::string quest);
	Hero();
	void act() override;
	void speak() override;
	void interactWith() override;
	void trade() override;
	void attack() override;

private:
	std::string name;
	int health;
	int power;
	std::string quest;
};