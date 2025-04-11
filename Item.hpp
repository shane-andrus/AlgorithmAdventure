#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>
#include <string>



class Item {
protected:
	std::string name;
	int value;

public:
	Item(std::string name, int value);

};

#endif