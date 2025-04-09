#include "Village.hpp"
#include <iostream>
Village::Village() : name("Default Village"), npcs(), villains(), inventory() {
}
Village::Village(std::string name, std::vector<NPC> npcs, std::vector<Villain> villains, Inventory inventory) : name(name), npcs(npcs), villains(villains), inventory(inventory) {
}
void Village::addNPC(NPC npc) {
	npcs.push_back(npc);
}
void Village::removeNPC(NPC npc) {
	auto it = std::remove_if(npcs.begin(), npcs.end(), [&](const NPC& n) { return n.getName() == npc.getName(); });
	if (it != npcs.end()) {
		npcs.erase(it, npcs.end());
	}
}
void Village::addVillain(Villain villain) {
	villains.push_back(villain);
}
void Village::removeVillain(Villain villain) {
	auto it = std::remove_if(villains.begin(), villains.end(), [&](const Villain& v) { return v.getName() == villain.getName(); });
	if (it != villains.end()) {
		villains.erase(it, villains.end());
	}
}
void Village::setInventory(Inventory inventory) {
	this->inventory = inventory;
}
std::string Village::getName() {
	return name;
}
std::vector<NPC> Village::getNPCs() {
	return npcs;
}
std::vector<Villain> Village::getVillains() {
	return villains;
}
Inventory Village::getInventory() {
	return inventory;
}
void Village::interactWith(GameCharacter& charAct) {
	std::cout << "Interacting with " << charAct.getName() << std::endl;
}
void Village::trade(GameCharacter& charAct) {
	std::cout << "Trading with " << charAct.getName() << std::endl;
}
void Village::attack(GameCharacter& charAct) {
	std::cout << "Attacking " << charAct.getName() << std::endl;
}
Village::~Village() {
}