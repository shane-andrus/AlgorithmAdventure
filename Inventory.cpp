#include "Inventory.hpp"

void Inventory::addItem(const Item& item) {
	items.push_back(item);
}

bool Inventory::removeItem(const std::string& itemName) {
	for (auto it = items.begin(); it != items.end(); ++it) {
		if (it->getName() == itemName) {
			items.erase(it);
			return true;
		}
	}
	return false;
}

void Inventory::printItems() const {
	for (const auto& item : items) {
		std::cout << item.getName() << " (" << item.getValue() << ")\n";
	}
}

int Inventory::linearSearch(const std::string& itemName) const {
	for (size_t i = 0; i < items.size(); ++i) {
		if (items[i].getName() == itemName) {
			return i;
		}
	}
	return -1;
}

int Inventory::binarySearch(int value) const {
	int left = 0;
	int right = items.size() - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (items[mid].getValue() == value) {
			return mid;
		}
		else if (items[mid].getValue() < value) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return -1;
}

void Inventory::bubbleSort() {
	int n = items.size();
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (items[j].getValue() > items[j + 1].getValue()) {
				std::swap(items[j], items[j + 1]);
			}
		}
	}
}
void Inventory::mergeSort() {
	mergeSortHelper(0, items.size() - 1);
}

void Inventory::mergeSortHelper(int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;
		mergeSortHelper(left, mid);
		mergeSortHelper(mid + 1, right);
		merge(left, mid, right);
	}
}

void Inventory::merge(int left, int mid, int right) {
	std::vector<Item> temp;
	int i = left, j = mid + 1;
	while (i <= mid && j <= right) {
		if (items[i] < items[j]) {
			temp.push_back(items[i++]);
		}
		else {
			temp.push_back(items[j++]);
		}
	}
	while (i <= mid) temp.push_back(items[i++]);
	while (j <= right) temp.push_back(items[j++]);
	for (int k = left; k <= right; ++k) {
		items[k] = temp[k - left];
	}
}