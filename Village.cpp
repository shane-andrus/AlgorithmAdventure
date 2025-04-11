#include "Village.hpp"
#include <iostream>
#include "NPC.hpp"
#include <vector>


Village::Village(){
	std::cout << "Village created" << std::endl;
}
void Village::addInhabitant(NPC* inhabitant) {  
  // villagers.push_back(*inhabitant);  
   std::cout << "Inhabitant added to village" << std::endl;  
}  

void Village::removeInhabitant(NPC* inhabitant) {

		std::cout << "Inhabitant removed from village" << std::endl;
	}

