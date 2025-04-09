#include <iostream>
#include <string> 


#indef INVENTORY_HPP
#define INVENTORY_HPP

// List<item> items
// std::list<item> items

class Inventory {
protected:
	std::list<item> items

public:
	addItem(Item item);
	removeItem(Item item);
};

#endif