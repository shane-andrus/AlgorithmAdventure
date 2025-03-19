#include <iostream>
#include "Inventory.hpp"

Inventory::Inventory() {}

Inventory::~Inventory() {
    for (Item* item : items) {
        delete item; // Clean up dynamically allocated items
    }
}

void Inventory::addItem(Item* item) {
    items.push_back(item);
    std::cout << "Added " << item->getName() << " to inventory." << std::endl;
}

void Inventory::removeItem(Item* item) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if (*it == item) {
            items.erase(it);
            std::cout << "Removed " << item->getName() << " from inventory." << std::endl;
            break;
        }
    }
}

const std::vector<Item*>& Inventory::getItems() const {
    return items;
}