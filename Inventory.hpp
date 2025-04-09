#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "Item.hpp"
#include <vector>

class inventory {

public:
	inventory();
	void additem(Item item);
	void removeitem(Item item);

	void removeitem(int index);

	int getsize();

	std::vector<Item> getItems();

private:
	std::vector <Item> items;
};

#endif