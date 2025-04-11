#include <iostream>
#include "GameCharacter.hpp"
#include "Hero.hpp"
#include "Villain.hpp"
#include "NPC.hpp"
#include "Village.hpp"
#include "Item.hpp"
#include "Inventory.hpp"
#include "Interactable.hpp"

int main()
{
	Village village("Random Village");
	Hero hero("Steve", 100, 5, "bring balance to the force");
	Villain villain("Herobrine", 100, 10, "destroy the world");
	NPC npc("Villager", 50, 2, "trader");
	NPC goku("Goku", 9999999999, 9001, "Saiyan");
	hero.addItemToInventory(Item("gold", 20));
	hero.addItemToInventory(Item("diamond", 50));
	hero.addItemToInventory(Item("iron", 10));
	hero.addItemToInventory(Item("emerald", 30));
	hero.addItemToInventory(Item("bread", 5));
	npc.addItemToInventory(Item("bread", 10));
	npc.addItemToInventory(Item("emerald", 30));
	npc.addItemToInventory(Item("map", 15));
	villain.addItemToInventory(Item("soggy waffle", 100));
	hero.attack(&villain);
	villain.attack(&hero);

}

