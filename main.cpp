#include <iostream>
#include "GameCharacter.hpp"
#include "NPC.hpp"
#include "Villain.hpp"
#include "Hero.hpp"
#include "Village.hpp"

int main()
{
    // Create a Hero
    Hero hero("Arthur", 150, 50, "Save the kingdom");
    std::cout << "Hero created: " << hero.getName() << " with quest: " << hero.getQuest() << std::endl;

    // Create a Villain
    Villain villain("Morgana", 200, 70, 100);
    std::cout << "Villain created: " << villain.getName() << " with evil points: " << villain.getEvilPoints() << std::endl;

    // Create NPCs
    NPC merchant("Merchant");
    NPC blacksmith("Blacksmith");
    std::cout << "NPCs created: " << merchant.getRole() << " and " << blacksmith.getRole() << std::endl;

    // Hero interacts with NPCs
    hero.interactWith(&merchant);
    hero.trade(&blacksmith);

    // Villain attacks Hero
    villain.attack(&hero);

    // Create a Village and add NPCs
    Village village("Camelot");
    village.addInhabitant(&merchant);
    village.addInhabitant(&blacksmith);

    std::cout << "Village created: " << village.getName() << " with inhabitants:" << std::endl;
    for (const auto &npc : village.getInhabitants())
    {
        std::cout << "- " << npc->getRole() << std::endl;
    }

    // Hero speaks
    hero.speak();

    // Villain acts
    villain.act();

    return 0;
}