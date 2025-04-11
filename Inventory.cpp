#include <iostream>
#include "Inventory.hpp""

Inventory::Inventory() : slots(std::vector<Item>())
{
	std::cout << "Inventory created" << std::endl;
}	

void Inventory::addItem(Item item) {
	
	std::cout << "Item added to inventory" << std::endl;
}

void Inventory::removeItem(Item item) {
	std::cout << "Item removed from inventory" << std::endl;
}
