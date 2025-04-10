#include <iostream>
#include "Hero.hpp"
#include "NPC.hpp"
#include "Villain.hpp""
#include "Item.hpp"
#include "Village.hpp"

int main() {
	// Create a Hero
	Hero hero;
	hero.setName("Malcolm");
	hero.setHealth(100);
	hero.setPowerLevel(10);
	hero.setQuest();

	// Create an NPC
	Npc npc;
	npc.setName("Lucy the Villager");
	npc.setHealth(80);
	npc.setPowerLevel(5);
	npc.setRole();

	// Create a Villain
	Villain villain;
	villain.setName("The Overlord");
	villain.setHealth(1000);
	villain.setPowerLevel(500);

	// Interact with the NPC
	npc.speak();
	hero.interact(&npc);
	npc.interact(&hero);

	// Trade with the NPC
	hero.trade(&npc);
	npc.trade(&hero);

	// Attack the Villain
	villain.speak();
	hero.attack(&villain);
	villain.attack(&hero);
	return 0;

	//Add a NPC to the village

	//Remove a NPC from the village

	//Add a Item to the inventory

	//Remov a Item from the inventory

	return 0;
}