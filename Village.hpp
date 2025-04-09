#ifndef VILLAGE_HPP
#define VILLAGE_HPP

#include "NPC.hpp"
#include <vector>

class Village {
protected:
	std::string name; // Name of the village
	std::vector<Npc> npcs; // List of NPCs in the village
public:
	Village(std::string n) : name(n) {} // Constructor
	Village() : name("The Beginner's Village") {} // Default constructor

	// Getters and Setters
	std::string getName() const { return name; }
	void setName(const std::string& n) { name = n; }
	std::vector<Npc> getNpcs() const { return npcs; }
	void setNpcs(const std::vector<Npc>& n) { npcs = n; }

	// Function to add an NPC to the village
	virtual void addInhabitant(Npc npcs) = 0;
	virtual void removeInhabitant(Npc npcs) = 0;
};

#endif 