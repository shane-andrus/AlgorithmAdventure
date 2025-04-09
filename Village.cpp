#include "Village.hpp"

Vilage::Vilage(std::string name)
{
	this->name = name;
	this->inhabiants = std::vector<NPC*>();
}
Vilage::Vilage() 
{
	this->name = "Default";
	this->inhabiants = std::vector<NPC*>();
}

void Vilage::addinhabiant(NPC* npc)
{
	this->inhabiants.push_back(npc);
}

void Vilage::removeinhabiant(NPC* npc)
{
	for (int i = 0; i < inhabiants.size(); i++)
	{
		if (inhabiants[i] == npc)
		{
			inhabiants.erase(inhabiants.begin() + i);
			break;
		}
	}
}

void Vilage::listInhabiants()
{
	for (int i = 0; i < inhabiants.size(); i++)
	{
		std::cout << inhabiants[i]->getName() << std::endl;
	}
}

std::string Vilage::getName()
{
	return name;
}

void Vilage::setName(std::string name)
{
	this->name = name;
}

std::vector<NPC*> Vilage::getinhabiants()
{
	return inhabiants;
}