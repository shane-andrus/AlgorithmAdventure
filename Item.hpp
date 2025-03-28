#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

class Item
{
private:
	std::string name;
	int value;
public:
	Item();
	Item(std::string, int);
	std::string getName();
	void setName(std::string);
	int getValue();
	void setValue(int);
};

#endif // !ITEM_HPP
