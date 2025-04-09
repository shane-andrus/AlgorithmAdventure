#include <iostream>
#include "Hero.hpp"
#include "NPC.hpp"
#include "Villain.hpp""
#include "Item.hpp"

int main() {
	// Create a Hero
	Hero hero;
	hero.setName("Malcolm");
	hero.setHealth(100);
	hero.setPowerLevel(10);

	// Create an NPC
	Npc npc;
	npc.setName("Lucy the Villager");
	npc.setHealth(80);
	npc.setPowerLevel(5);

	// Create a Villain
	Villain villain;
	villain.setName("The Overlord");
	villain.setHealth(1000);
	villain.setPowerLevel(500);

	// Interact with the NPC
	hero.interact(&npc);

	// Trade with the NPC
	hero.trade(&npc);

	// Attack the Villain
	hero.attack(&villain);
	return 0;
}