#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include <vector>
#include "Item.hpp"

class Inventory
{
private:
    std::vector<Item*> items;

public:
    Inventory();
    ~Inventory(); // Destructor to clean up items

    // Methods
    void addItem(Item* item);
    void removeItem(Item* item);
    const std::vector<Item*>& getItems() const;
};

#endif // INVENTORY_HPP