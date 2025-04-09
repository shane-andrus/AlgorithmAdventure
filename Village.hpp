#ifndef VILAGE_HPP
#define VILAGE_HPP

#include "NPC.hpp"
#include <vector>
#include <string>

class Vilage {
private:
	std::string name;
	std::vector <NPC*> inhabiants;
	
public:
	Vilage(std::string name);
	Vilage();

	

	void addinhabiant(NPC* npc);
	void removeinhabiant(NPC* npc);
	void listInhabiants();

	void setName(std::string name);
	std::vector<NPC*> getinhabiants();
	std::string getName();
};

#endif