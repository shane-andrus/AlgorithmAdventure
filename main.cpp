#include <iostream>
#include "Hero.hpp"
#include "NPC.hpp"
#include "Villain.hpp""
#include "Item.hpp"
#include "Village.hpp"

int main() {
	// Create a Hero
	Hero hero;
	std::string name;
	std::cout << "Enter the name of the hero: ";
	std::getline(std::cin, name);
	hero.setName(name);
	hero.setHealth(100);
	hero.setPowerLevel(10);
	hero.setQuest();

	// Create an NPC
	Npc npc;
	npc.setRole();
    npc.setName("Kafka the " + npc.getRole());
	npc.setHealth(70);
	npc.setPowerLevel(5);

	// Create a Villain
	Villain villain;
	villain.setName("Sam");
	villain.setHealth(1000);
	villain.setPowerLevel(500);

	// Interact with the NPC
	std::cout << std::endl;
	npc.speak();
	hero.interact(&npc);
	npc.interact(&hero);
	std::cout << std::endl;

	// Trade with the NPC
	hero.trade(&npc);
	npc.trade(&hero);
	std::cout << std::endl;
	// Attack the Villain
	villain.speak();
	hero.attack(&villain);
	villain.attack(&hero);
	std::cout << std::endl;

	//Add a NPC to the village

	//Remove a NPC from the village

	//Add a Item to the inventory

	//Remov a Item from the inventory

	return 0;
}