#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>

class Item {
private:
   std::string name;
   int value;
public:
   //Getters and Setters
	std::string getName() const;
	int getValue() const;
	void setName(const std::string& n);
	void setValue(int v);
   Item(std::string n, int v) : name(n), value(v) {} // Constructor
   Item() : name("Unknown"), value(0) {} // Default constructor

};

#endif // ITEM_HPP