#include "Inventory.hpp"
#include "Item.hpp"

Inventory::Inventory() : slots(std::vector<Item>())
{
	slots.push_back(Item("Health Potion", 10));
	slots.push_back(Item("Mana Potion", 15));
	slots.push_back(Item("Sword", 50));
	slots.push_back(Item("Shield", 40));
	slots.push_back(Item("Armor", 30));
};
