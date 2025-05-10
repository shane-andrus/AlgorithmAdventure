#ifndef Villain_HPP
#define Villain_HPP
#include <string>
#include "GameCharacter.hpp"
#include "Interactable.hpp"
#include "NPC.hpp"
class Villain : public GameCharacter, public Interactable {
public:
	Villain();
	Villain(std::string name, int health, int powerlevel);
	Villain(std::string name, int health, int powerlevel, bool interact);
	void speak();
	void act();
	std::string getName();
	int getHealth();
	int getPowerLevel();
	void interactWith(GameCharacter& charAct);
	void trade(GameCharacter& charAct);
	void attack(GameCharacter& charAct);
	~Villain();
private:
	std::string name;
	int health;
	int powerLevel;
	bool interactable;
}
#endif // !Villain_HPP
;