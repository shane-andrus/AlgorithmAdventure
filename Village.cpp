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

Village::~Village()
{
}
