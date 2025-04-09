#include "Village.hpp"  
#include "NPC.hpp"  

void Village::addInhabitant(Npc npc) {  
  // Implementation for adding an NPC to the village  
  npcs.push_back(npc);  
}  

void Village::removeInhabitant(Npc npc) {  
  // Implementation for removing an NPC from the village  
  npcs.erase(std::remove(npcs.begin(), npcs.end(), npc), npcs.end());  
}
