#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include <vector>
#include <string>
#include "Item.hpp"

class Inventory {
public:
	Inventory();
	~Inventory();
	
	void addItem(const Item& item);
	void removeItem(const std::string& itemName);
	void listItems() const;
	void randomItem();

private:
	std::vector<Item> items;
};

#endif