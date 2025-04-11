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
    int findItem(std::string);
    int findItem(int);
    int findSortedItem(std::string);
    int findSortedItem(int);
    void sortItemsByName();
    void sortItemsByValue();
    virtual ~Inventory();
};

#endif // !INVENTORY_HPP
