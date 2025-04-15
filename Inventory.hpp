#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "Item.hpp"
#include <vector>

class Inventory {

    public:
    Inventory();
    void addItem(Item items);
    void removeItem(Item items);

    void removeItem(int slot);

    int getSize();

    std::vector <Item> getItems();

    private:
    std::vector <Item> items;

    
};
#endif //Inventory