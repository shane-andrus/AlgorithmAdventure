#include "Village.hpp"

Village::Village(const std::string& name) : name(name) {}

void Village::addNPC(NPC* npc) {
	npcs.push_back(npc);
}

void Village::removeNPC(const std::string& npcName)
{
	for (auto it = npcs.begin(); it != npcs.end(); ++it) {
		if ((*it)->getName() == npcName) {
			npcs.erase(it);
			return true;
		}
	}
	return false;
}

void Village::listNPCs() const
{
	for (const auto& npc : npcs) {
		std::cout << "Name: " << npc->getName()
			<< ", Role: " << npc->getRole()
			<< ", Power Level: " << npc->getPowerLevel()
			<< std::endl;
	}
}

void Village::sortNPCsByName()
{
	for (size_t i = 0; i < npcs.size() - 1; ++i) {
		for (size_t j = 0; j < npcs.size() - i - 1; ++j) {
			if (npcs[j]->getName() > npcs[j + 1]->getName()) {
				std::swap(npcs[j], npcs[j + 1]);
			}
		}
	}
}

void Village::sortNPCsByRole()
{
	for (size_t i = 0; i < npcs.size() - 1; ++i) {
		for (size_t j = 0; j < npcs.size() - i - 1; ++j) {
			if (npcs[j]->getRole() > npcs[j + 1]->getRole()) {
				std::swap(npcs[j], npcs[j + 1]);
			}
		}
	}
}

void Village::sortNPCsByLevel()
{
	for (size_t i = 0; i < npcs.size() - 1; ++i) {
		for (size_t j = 0; j < npcs.size() - i - 1; ++j) {
			if (npcs[j]->getPowerLevel() > npcs[j + 1]->getPowerLevel()) {
				std::swap(npcs[j], npcs[j + 1]);
			}
		}
	}
}

void Village::findNPCByName(const std::string& npcName) const
{
	for (const auto& npc : npcs) {
		if (npc->getName() == npcName) {
			std::cout << "Found NPC: " << npc->getName() << ", Role: " << npc->getRole() << ", Power Level: " << npc->getPowerLevel() << std::endl;
			return;
		}
	}
	std::cout << "NPC not found." << std::endl;
}

std::string Village::getName() const
{
	return std::string();
}
