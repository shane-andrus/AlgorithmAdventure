#include "Inventory.hpp"
#include "Item.hpp"

inventory::inventory()
{
	this->items = std::vector<Item>();
}


void inventory::additem(Item item)
{
	items.push_back(item);
}

void inventory::removeitem(Item item)
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

void inventory::removeitem(int index)
{
	items.erase(items.begin() + index);
}

int inventory::getsize()
{
	return items.size();
}

std::vector<Item> inventory::getItems()
{
	return std::vector<Item>();
}
