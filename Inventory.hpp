#ifndef INVENTORY_HPP  
#define INVENTORY_HPP  

#include <string>  
#include <vector>  
#include "Item.hpp"  
#include "Hero.hpp"  

class Inventory {  
private:  
	std::vector<Item> slots;

public:  
  //Defalut constructor
  Inventory() {}

  // Function to add an item to the inventory  
  void addItem(const Item& item) {  
      slots.push_back(item);  
  }  

  // Function to remove an item from the inventory  
  void removeItem(const Item& item) {  
      auto it = std::find(slots.begin(), slots.end(), item);  
      if (it != slots.end()) {  
          slots.erase(it);  
      }  
  }  
};  

#endif