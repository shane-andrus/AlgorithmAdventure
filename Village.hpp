#ifndef VILLAGE_HPP
#define VILLAGE_HPP

#include <string>
#include <vector>
#include "NPC.hpp"

class Village {
private:
	std::string name;
	std::vector<NPC*> npcs;

public:
	Village(const std::string& name);

	void addNPC(NPC* npc);
	void removeNPC(const std::string& npcName);
	void listNPCs() const;

	void sortNPCsByName();
	void sortNPCsByRole();
	void sortNPCsByLevel();
	void findNPCByName(const std::string& npcName) const;

	std::string getName() const;
};
#endif 