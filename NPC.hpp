#ifndef NPC_HPP
#define NPC_HPP

#include "GameCharacter.hpp"

class NPC : public GameCharacter {
public:
	NPC(std::string name, int health, int powerLevel, std::string role);
	virtual ~NPC();

	void act() override;
	void speak() override;

	void interactWith(GameCharacter* character);
	void trade(GameCharacter* character);
	void attack(GameCharacter* character);

	std::string giveQuest(GameCharacter* character);

	std::string getRole() const;
	std::string getName() const;
	int getHealth() const;
	int getPowerLevel() const;

protected:
	std::string role;
};
#endif