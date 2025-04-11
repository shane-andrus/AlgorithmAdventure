#include "Item.hpp"

Item::Item(const std::string& name, int value) : name(name), value(value) {}

std::string Item::getName() const {
	return name;
}

int Item::getValue() const {
	return value;
}

bool Item::operator<(const Item& other) const {
	return value < other.value;
}

bool Item::operator==(const Item& other) const {
	return name == other.name && value == other.value;
}
