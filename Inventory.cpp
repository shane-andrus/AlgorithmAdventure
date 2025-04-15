#include "Inventory.hpp"
#include "Item.hpp"

#include <string>

Inventory::Inventory()
{
    this->items = std::vector<Item>();
}

void Inventory::addItem(Item item)
{
    items.push_back(item);
}

void Inventory::removeItem(Item item)
{
    for (int i = 0; i < items.size(); i++)
	{
		if (items[i].getName() == item.getName())
		{
			items.erase(items.begin() + i);
			break;
		}
	}
}

void Inventory::removeItem(int index)
{
	items.erase(items.begin() + index);
}

int Inventory::getSize()
{
	return items.size();
}

std::vector<Item> Inventory::getItems()
{
	return std::vector<Item>();
}