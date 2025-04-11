#include "Item.hpp"
#include "Inventory.hpp"
#include <iostream>

std::string Item::getName() const
{
	return std::string();
};

int Item::getValue() const
{
	return 0;
}

void Item::setName(const std::string& n)
{
	name = n;
}

void Item::setValue(int v)
{
	value = v;
}
