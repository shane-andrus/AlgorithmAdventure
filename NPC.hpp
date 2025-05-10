#ifndef NPC_HPP
#define NPC_HPP
#include <string>
#include "GameCharacter.hpp"
#include "Interactable.hpp"
class NPC : public GameCharacter, public Interactable {
public:
	NPC();
	NPC(std::string name, int health, int powerlevel);
	NPC(std::string name, int health, int powerlevel,bool interact);
	void speak();
	void act();
	std::string getName();
	int getHealth();
	int getPowerLevel();
	void interactWith(GameCharacter &charAct);
	void trade(GameCharacter &charAct);
	void attack(GameCharacter &charAct);
	~NPC();
private:
	std::string name;
	int health;
	int powerLevel;
	bool interactable;
};
#endif // !NPC_HPP
