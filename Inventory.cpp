#include "Inventory.hpp"
#include <iostream>

Inventory::Inventory() {}

Inventory::~Inventory() {}

void Inventory::addItem(const Item& item) {
	items.push_back(item);
}

void Inventory::removeItem(const std::string& itemName) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if (it->getName() == itemName) {
            items.erase(it);
            std::cout << itemName << " removed from inventory.\n";
            return;
        }
    }
    std::cout << itemName << " not found in inventory.\n";
}

void Inventory::listItems() const {
	if (items.empty()) {
		std::cout << "Inventory is empty.\n";
		return;
	}
	std::cout << "Items in inventory:\n";
	for (const auto& item : items) {
		std::cout << "- " << item.getName() << " (Value: " << item.getValue() << ")\n";
	}
}