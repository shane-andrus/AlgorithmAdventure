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
	Village(std::string);
	Village(std::string, std::vector<NPC>);
	void addInhabitant(NPC&);
	void removeInhabitant(NPC&);
	std::vector<NPC> getInhabitants();
	NPC& getInhabitant(int);
	void sortInhabitantsByName();
	void sortInhabitantsByPowerLevel();
	int partitionByName(std::string, std::string, std::string);
	int partitionByPowerLevel(int, int, int);
	void swapNPCs(std::vector<NPC>, int, int);
	virtual ~Village();
};

#endif