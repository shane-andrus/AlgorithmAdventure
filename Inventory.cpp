#include <vector>

#include "Inventory.hpp"
#include "Item.hpp"

Inventory::Inventory(): items(std::vector<Item>())
{
}

Inventory::Inventory(std::vector<Item> items): items(items)
{
}

void Inventory::addItem(Item item)
{
	items.push_back(item);
}

void Inventory::removeItem(Item item)
{
	items.erase(std::remove(items.begin(), items.end(), item), items.end());
}

std::vector<Item> Inventory::getItems()
{
	return items;
}

Item Inventory::getItem(int index)
{
	return items[index];
}


