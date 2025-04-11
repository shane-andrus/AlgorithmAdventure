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
	void quickSortByName(std::vector<NPC>, int, int);
	void quickSortByPowerLevel(std::vector<NPC>, int, int);
	int partitionByName(std::vector<NPC>, int, int, std::string);
	int partitionByPowerLevel(std::vector<NPC>, int, int, int);
	void swapNPCs(std::vector<NPC>, int, int);
	virtual ~Village();
};

#endif