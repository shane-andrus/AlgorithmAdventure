#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

class Item
{
private:
    std::string name;
    int value;

public:
    Item(const std::string& name, int value);

    // Getters and Setters
    std::string getName() const;
    void setName(const std::string& name);
    int getValue() const;
    void setValue(int value);
};

#endif // ITEM_HPP