#include "Item.hpp"

void Item::setName(std::string name)
{
    this->name = name;
}

void Item::setValue(int value)
{
    this->value = value;
}

std::string Item::getName()
{
    return this->name;
}

int Item::getValue()
{
    return this->value;
}