#include <iostream>

#include "Item.cpp"
#include "Inventory.cpp"
#include "GameCharacter.cpp"
#include "Villain.cpp"
#include "NPC.cpp"
#include "Hero.cpp"
#include "Village.cpp"
#include "Interactable.hpp"

int main() {
    std::cout << "=== Game Test Begins ===\n\n";

    // Item Stuff
    Item sword("Steel Sword", 100);
    Item shield("Wooden Shield", 60);
    Item potion("Healing Potion", 40);

    // Inventory stuff
    Inventory heroInventory;
    heroInventory.addItem(sword);
    heroInventory.addItem(shield);
    heroInventory.addItem(potion);
    heroInventory.listItems();
    heroInventory.removeItem("Wooden Shield");
    heroInventory.listItems();

    std::cout << "\n";

    // Hero stuff
    Hero hero("Batman", 120, 50);
    hero.speak();
    hero.act();

    std::cout << "\n";

    // Villain stuff
    Villain villain("Joker", 160, 80, 10);
    villain.speak();
    villain.act();

    std::cout << "\n";

    // NPC stuff
    NPC shopkeeper("Commisioner Gordon", 20, 5, "Shopkeeper");
    shopkeeper.interactWith(&hero);
    shopkeeper.trade(&hero);
    shopkeeper.attack(&hero);
    
    // Villager NPCs
    NPC blacksmith("Gerald", 100, 20, "Blacksmith");
    NPC herbalist("Mirabelle", 80, 15, "Herbalist");
    NPC fisherboy("Finn", 60, 10, "Fisherboy");
    NPC storyteller("Thalia", 70, 5, "Storyteller");
    NPC guard("Boris", 120, 25, "Guard");
    std::cout << "\n";

    // Village stuff

    std::vector<NPC> villagers = {
		blacksmith,
		herbalist,
		fisherboy,
		storyteller,
		guard
    };

    Village gotham("Gotham", villagers);
	gotham.addInhabitant(shopkeeper);
	gotham.removeInhabitant("Finn");
	std::cout << gotham.listInhabitants() << "\n";

    std::cout << "\n=== Game Test Complete ===\n";

    return 0;
}
