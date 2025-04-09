#include "Item.hpp"

Item::Item(std::string name, int value)
	: name(name), value(value) {
}

Item::~Item() {}

std::string Item::getName() const {
	return name;
}

int Item::getValue() const {
	return value;
}