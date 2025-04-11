#include "Inventory.hpp"
#include "Item.hpp"

Inventory::Inventory() : slots(std::vector<Item>()) {}

Inventory::~Inventory()
{
}

void Inventory::addItem(const Item& item)
{
}

void Inventory::removeItem(const Item& item)
{
}
