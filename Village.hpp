#include <iostream>
#include <string>

#indef VILLAGE_HPP
#define VILLAGE_HPP

class Village {
protected:
	std::string name;
	std::list<NPC> inhabitants;

public:
	//GameCharacter(std::string, std::int, std::int);
	Village(std::string, std::list<NPC>);
	addInhabitant(NPC npc);
	removeInhabitant(NPC npc);

};

#endif