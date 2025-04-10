#ifndef VILLAGE_HPP
#define VILLAGE_HPP

#include "NPC.hpp"
#include <vector>

class Village: public Npc{
protected:
	std::string name; // Name of the village
	std::vector<Npc> npcs; // List of NPCs in the village
public:
	Village(std::string n) : name(n) {} // Constructor
	Village() : name("The Beginner's Village") {} // Default constructor

	// Function to add an NPC to the village
	virtual void addInhabitant(Npc npc) = 0;
	virtual void removeInhabitant(Npc npc) = 0;
};

#endif 