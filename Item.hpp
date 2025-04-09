#ifndef Item_HPP
#define Item_HPP
#include <string>
#include <iostream>
class Item {
public:
	Item();
	Item(std::string name, std::string description, int value);
	void setName(std::string name);
	void setDescription(std::string description);
	void setValue(int value);
	std::string getName();
	std::string getDescription();
	int getValue();
	void displayItemInfo();
	~Item();
private:
	std::string name;
	std::string description;
	int value;
};

#endif // !Item_HPP
