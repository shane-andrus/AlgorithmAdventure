#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

class Item {
public:
	Item(std::string name, int value);
	~Item();
	std::string getName() const;
	int getValue() const;
private:
	std::string name;
	int value;
};

#endif