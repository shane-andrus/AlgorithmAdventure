#include "GameCharacter.cpp"
#include "Hero.cpp"
#include "Interactable.hpp"
#include "Inventory.cpp"
#include "Item.cpp"
#include "NPC.cpp"
#include "Village.cpp"
#include "Villain.cpp"

// Item::Item(std::string name, std::int value)
Item CrystalSword = new Item("Crystal Sword", 75);

std::cout << CrystalSword << std::endl;