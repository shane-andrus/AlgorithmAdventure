#ifndef VILLAGE_HPP
#define VILLAGE_HPP

#include <iostream>
#include <string>



class Village {
protected:
	std::string name;
	std::list<NPC> inhabitants;

public:
	//GameCharacter(std::string, std::int, std::int);
	Village(std::string, std::list<NPC>);
	void addInhabitant(NPC npc);
	void removeInhabitant(NPC npc);

};

#endif