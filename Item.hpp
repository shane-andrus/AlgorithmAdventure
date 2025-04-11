#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
class Item
{
public:
	Item(std::string name, int value); // Add constructor declaration
private:
	std::string name;
	int value;
};

#endif