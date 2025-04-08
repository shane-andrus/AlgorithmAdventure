#include "Item.hpp"

Item::Item(): name("item"), value(0)
{
}

Item::Item(std::string name): name(name), value(0)
{
}

Item::Item(std::string name, int value): name(name), value(value)
{
}

std::string Item::getName()
{
    return name;
}

void Item::setName(std::string name)
{
    this->name = name;
}

int Item::getValue()
{
    return value;
}

void Item::setValue(int value)
{
    this->value = value;
}

Item::~Item()
{
}
