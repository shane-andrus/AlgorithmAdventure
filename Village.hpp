#ifndef Village_HPP
#define Village_HPP
#include <string>
#include <vector>
#include "GameCharacter.hpp"
#include "Interactable.hpp"
#include "NPC.hpp"
#include "Villain.hpp"
#include "Inventory.hpp"
#include "Item.hpp"
#include "Hero.hpp"
class Village {
public:
	Village();
	Village(std::string name, std::vector<NPC> npcs, std::vector<Villain> villains, Inventory inventory);
	void addNPC(NPC npc);
	void removeNPC(NPC npc);
	void addVillain(Villain villain);
	void removeVillain(Villain villain);
	void setInventory(Inventory inventory);
	std::string getName();
	std::vector<NPC> getNPCs();
	std::vector<Villain> getVillains();
	Inventory getInventory();
	void interactWith(GameCharacter& charAct);
	void trade(GameCharacter& charAct);
	void attack(GameCharacter& charAct);
private:
	std::string name;
	std::vector<NPC> npcs;
	std::vector<Villain> villains;
	Inventory inventory;
};
#endif // !Village_HPP
