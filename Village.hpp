#ifndef VILLAGE_HPP
#define VILLAGE_HPP


#include <string>
#include <vector>
#include "NPC.hpp"

class Village {

public: 
	Village();
	void addInhabitant(NPC* inhabitant);
	void removeInhabitant(NPC* inhabitant);
	void listInhabitants();
private:

	std::string name;
	std::vector<NPC> villagers;

};

#endif