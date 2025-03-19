#include <iostream>
#include <vector>
#include "Hero.hpp"
#include "Villain.hpp"
#include "NPC.hpp"
#include "Village.hpp"

int main() {
    // Create a Hero with an Inventory
    Hero* hero = new Hero("Arden", 100, 50, "Find the Code Crystal");
    Item* sword = new Item("Crystal Sword", 100);
    hero->getInventory()->addItem(sword);

    // Create a Villain
    Villain* villain = new Villain("Malakar", 80, 70, 50);

    // Create an NPC and a Village
    NPC* npc = new NPC("Elara", 50, 20, "Merchant");
    Village* village = new Village("Luminara");
    village->addInhabitant(npc);

    // Demonstrate polymorphism
    std::vector<GameCharacter*> characters = { hero, villain, npc };
    std::cout << "=== Demonstrating Polymorphism ===\n";
    for (GameCharacter* character : characters) {
        character->act();
        character->speak();
        character->interactWith(hero);
        character->trade(npc);
        std::cout << std::endl;
    }

    // Demonstrate composition and aggregation
    std::cout << "=== Demonstrating Composition and Aggregation ===\n";
    hero->getInventory()->removeItem(sword);
    village->removeInhabitant(npc);

    // Clean up
    delete sword; // Item was dynamically allocated
    delete npc;   // NPC was dynamically allocated and removed from Village
    delete villain;
    delete hero;  // Hero's destructor will clean up Inventory
    delete village;

    return 0;
}