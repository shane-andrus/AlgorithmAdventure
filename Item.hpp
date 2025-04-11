#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

class Item {
private:
    std::string name;
    int value;

public:
    Item(const std::string& name, int value);
    std::string getName() const;
    int getValue() const;
    bool operator<(const Item& other) const; 
    bool operator==(const Item& other) const;
	~Item() = default; // Destructor
};

#endif 