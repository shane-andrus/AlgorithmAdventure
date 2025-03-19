#include "Item.hpp"

Item::Item(const std::string& name, int value) : name(name), value(value) {}

std::string Item::getName() const {
    return name;
}

void Item::setName(const std::string& name) {
    this->name = name;
}

int Item::getValue() const {
    return value;
}

void Item::setValue(int value) {
    this->value = value;
}