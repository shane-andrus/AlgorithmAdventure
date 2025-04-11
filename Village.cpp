#include "Village.hpp"  
#include "NPC.hpp"  
#include <iostream>

void Village::addInhabitant(Npc npc) {
  // Implementation for adding an NPC to the village  
  npcs.push_back(npc); 
  std::cout << npc.getName() << " is added to the village." << std::endl;
}  

void Village::removeInhabitant(Npc npc) {  
  // Implementation for removing an NPC from the village  
  npcs.erase(std::remove(npcs.begin(), npcs.end(), npc), npcs.end());  
  std::cout << npc.getName() << " is removed from the village." << std::endl;
}
