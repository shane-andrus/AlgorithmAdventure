#include "NPC.hpp"
#include <iostream>


NPC::NPC() : GameCharacter("Fil",50,1), Interactable(false) {

}
NPC::NPC(std::string name,int health,int powerlevel):GameCharacter(name,health,powerlevel),Interactable(false){

}
NPC::NPC(std::string name, int health, int powerlevel, bool interact) :GameCharacter(name, health, powerlevel), Interactable(interact) {
}
void NPC::interactWith(class GameCharacter &charAct){
	std::cout << "Interacting with " << charAct.getName() << std::endl;
}
void NPC::trade(GameCharacter& charAct) {
	std::cout << "Trading with " << charAct.getName() << std::endl;
}
void NPC::attack(GameCharacter& charAct) {
	std::cout << "Attacking " << charAct.getName() << std::endl;
}
