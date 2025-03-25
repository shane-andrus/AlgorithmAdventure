#include "NPC.hpp"
#include <vector>

class Vilage {
public:
	std::vector <NPC> inhabiants;

	void addinhabiant(NPC npc);
	void removeinhabiant(NPC npc);
};