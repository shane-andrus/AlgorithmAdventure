#include <vector>

#include "Village.hpp"

Village::Village(): name("Springfield"), inhabitants(std::vector<NPC>())
{
}

Village::Village(std::string name): name(name), inhabitants(std::vector<NPC>())
{
}

Village::Village(std::string name, std::vector<NPC> inhabitants): name(name), inhabitants(inhabitants)
{
}

void Village::addInhabitant(NPC& npc)
{
	inhabitants.push_back(npc);
}

void Village::removeInhabitant(NPC& npc)
{
	inhabitants.erase(std::remove(inhabitants.begin(), inhabitants.end(), npc), inhabitants.end());
}

std::vector<NPC> Village::getInhabitants()
{
	return inhabitants;
}

NPC& Village::getInhabitant(int index)
{
	return inhabitants[index];
}

void Village::sortInhabitantsByName()
{
}

void Village::sortInhabitantsByPowerLevel()
{
}

int Village::partitionByName(std::string, std::string, std::string)
{
	return 0;
}

int Village::partitionByPowerLevel(int low, int high, int pivot)
{
	int i = low;
	int j = low;
	while (i <= high) {
		if (inhabitants[i].getPowerLevel() > pivot) {
			i++;
		}
		else {
			swapNPCs(inhabitants, i, j);
			i++;
			j++;
		}
	}
	return j - 1;
}

void Village::swapNPCs(std::vector<NPC> people, int pos1, int pos2)
{
	NPC temp;
	temp = people[pos1];
	people[pos1] = people[pos2];
	people[pos2] = temp;
}

Village::~Village()
{
}
