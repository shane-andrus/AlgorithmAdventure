#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include <vector>

#include "Item.hpp"

class Inventory
{
private:
    std::vector<Item> items;
public:
    Inventory();
    Inventory(std::vector<Item>);
    void addItem(Item item);
    void removeItem(Item item);
    std::vector<Item> getItems();
    Item getItem(int);
};

#endif // !INVENTORY_HPP
