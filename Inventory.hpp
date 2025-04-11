#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "Item.hpp"
#include <vector>

class Inventory {
private:
	std::vector<Item> slots;
public:
	Inventory();
	void addItem(Item item);
	void removeItem(Item item);
}
;
#endif