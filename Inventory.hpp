#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include <vector>
#include "Item.hpp"

class Inventory {
private:
	std::vector<Item> items;

public:
	void addItem(const Item& item);
	void removeItem(const std::string& itemName);
	void printItems() const; 

	int linearSearch(const std::string& itemName) const;
	int binarySearch(int value) const;

	void bubbleSort();
	void mergeSort();

private:
	void mergeSortHelper(int left, int right);
	void merge(int left, int mid, int right);
};
#endif 