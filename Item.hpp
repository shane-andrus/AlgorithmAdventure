#include <iostream>
#include <string>

#ifndef ITEM_HPP
#define ITEM_HPP

class Item {
protected:
	std::string name;
	std::int value;

public:
	Item(std::string, std::int);

};