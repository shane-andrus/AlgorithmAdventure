#ifndef VILLAGE_HPP
#define VILLAGE_HPP

#include "NPC.hpp"

#include <iostream>
#include <string>
#include <vector>

class Village {
public:
	Village(std::string name, std::vector<NPC> inhabitants);
	virtual ~Village();

	void addInhabitant(const NPC& character);
	void removeInhabitant(const std::string& name);
	std::string listInhabitants();

protected:
	std::string name;
	std::vector<NPC> inhabitants;
};

#endif