#include "Item.hpp"
#include <iostream>

Item::Item(std::string name, int value) : name(name), value(value) {
	// Constructor implementation
	std::cout << "Item: " << name << std::endl;
	std::cout << "Value: " << value << std::endl;
}