#ifndef VILLAGE_HPP
#define VILLAGE_HPP

#include <string>
#include <vector>

#include "NPC.hpp"

class Village
{
private:
	std::string name;
	std::vector<NPC> inhabitants;
public:
	Village();
	Village(std::string, std::vector<NPC>);
	void addInhabitant(NPC&);
	void removeInhabitant(NPC&);
	std::vector<NPC> getInhabitants();
	NPC& getInhabitant(int);
};

#endif