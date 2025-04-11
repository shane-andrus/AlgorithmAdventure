#include <vector>

#include "Inventory.hpp"
#include "Item.hpp"

// Default constructor
Inventory::Inventory(): items(std::vector<Item>())
{
}

// Constructor overloading
Inventory::Inventory(std::vector<Item> items): items(items)
{
}

void Inventory::addItem(Item item)
{
	items.push_back(item);
}

// Removing a specific item from the inventory
void Inventory::removeItem(Item item)
{
	items.erase(std::remove(items.begin(), items.end(), item), items.end());
}

std::vector<Item> Inventory::getItems()
{
	return items;
}

Item Inventory::getItem(int index)
{
	return items[index];
}

// Finding the index of an item with the given name
// Using linear search (O(n))
// // Linear time: the number of steps = the size of the inventory
int Inventory::findItem(std::string name)
{
	for (int i = 0; i < items.size(); i++) {
		if (items[i].getName() == name) {
			return i;
		}
	}
	return -1;
}

// Finding the index of an item with the given index
// Using linear search (O(n))
// // Linear time: the number of steps = the size of the inventory
int Inventory::findItem(int value)
{
	for (int i = 0; i < items.size(); i++) {
		if (items[i].getValue() == value) {
			return i;
		}
	}
	return -1;
}

// Finding the index of an item with the given name
// Vector must be sorted
// Using binary search (O(log n))
// // Logarithmic time: whenever the inventory size doubles, the number of necessary operation only increases by one
int Inventory::findSortedItem(std::string name)
{
	int low = 0;
	int high = items.size() - 1;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (name == items[mid].getName()) {
			return mid;
		}
		if (name > items[mid].getName()) {
			low = mid + 1;
		}
		if (name < items[mid].getName()) {
			high = mid - 1;
		}
	}
	return -1;
}

// Finding the index of an item with the given name
// Vector must be sorted
// Using binary search (O(log n))
// // Logarithmic time: whenever the inventory size doubles, the number of necessary operation only increases by one
int Inventory::findSortedItem(int value)
{
	int low = 0;
	int high = items.size() - 1;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (value == items[mid].getValue()) {
			return mid;
		}
		if (value > items[mid].getValue()) {
			low = mid + 1;
		}
		if (value < items[mid].getValue()) {
			high = mid - 1;
		}
	}
	return -1;
}

// Sorting the inventory by name
// Using a quadratic sort (insertion sort, O(n^2))
// // Can be faster than log-linear for smaller data sets
// // Simpler than log-linear
// // The performance is directly proportional to the problem's size squared
void Inventory::sortItemsByName()
{
	Item currentItem;
	for (int i = 1; i < items.size(); i++) {
		currentItem = items[i];
		for (int j = i - 1; j >= 0 && items[j].getName() > currentItem.getName(); j--) {
			items[j + 1] = items[j];
			if (j - 1 >= 0 && items[j - 1].getName() > currentItem.getName()) {
				items[j + 1] = currentItem;
			}
		}
	}
}

// Sorting the inventory by value
// Using a quadratic sort (insertion sort, O(n^2))
// // Can be faster than log-linear for smaller data sets
// // Simpler than log-linear
// // The performance is directly proportional to the problem's size squared
void Inventory::sortItemsByValue()
{
	Item currentItem;
	for (int i = 1; i < items.size(); i++) {
		currentItem = items[i];
		for (int j = i - 1; j >= 0 && items[j
	].getValue() > currentItem.getValue(); j--) {
			items[j + 1] = items[j];
			if (j - 1 >= 0 && items[j - 1].getValue() > currentItem.getValue()) {
				items[j + 1] = currentItem;
			}
		}
	}
}

Inventory::~Inventory()
{
}


