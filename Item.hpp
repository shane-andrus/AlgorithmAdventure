#ifndef ITEM
#define ITEM

#include <string>

class Item {

private:
	std::string name;
	int value;

public:
	void setName(std::string name);
	void setValue(int value);
	std::string getName();
	int getValue();
	
};

#endif // !ITEM