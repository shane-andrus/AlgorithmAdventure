#ifndef INVENTORY_HPP  
#define INVENTORY_HPP  

#include <string>  
#include <vector>  
#include "Item.hpp"  


class Inventory {  
private:  
	std::vector<Item> slots;

public:  
  //Defalut constructor
    Inventory();
    ~Inventory(); // Destructor

  // Function to add an item to the inventory  
    void addItem(const Item& item);

        // Function to remove an item from the inventory  
        void removeItem(const Item& item);
};  

#endif