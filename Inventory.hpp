#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include <iostream>
#include <string> 
#include <list>
#include "Item.hpp"


// List<item> items
// std::list<item> items

class Inventory {
protected:
	std::list<Item> items;

public:
	void addItem(Item item);
	void removeItem(Item item);
};

#endif