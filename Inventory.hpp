#include "Item.hpp"
#include <vector>

class inventory {
public:
	std::vector <Item> items;

	void additem(Item item);
	void removeitem(Item item);
};