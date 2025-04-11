#include <vector>

#include "Village.hpp"

// Default Constructor
Village::Village(): name("Springfield"), inhabitants(std::vector<NPC>())
{
}

// Constructor Overloading
Village::Village(std::string name): name(name), inhabitants(std::vector<NPC>())
{
}

// Constructor Overloading
Village::Village(std::string name, std::vector<NPC> inhabitants): name(name), inhabitants(inhabitants)
{
}

void Village::addInhabitant(NPC& npc)
{
	inhabitants.push_back(npc);
}

// Removes a specific inhabitant
void Village::removeInhabitant(NPC& npc)
{
	inhabitants.erase(std::remove(inhabitants.begin(), inhabitants.end(), npc), inhabitants.end());
}

std::vector<NPC> Village::getInhabitants()
{
	return inhabitants;
}

NPC& Village::getInhabitant(int index)
{
	return inhabitants[index];
}

// Order the inhabitants by name
// Log-linear sort (quick sort, O(n log n))
// // Slightly more efficient that quadratic sorting for large data sets
// // Divides the data set into smaller parts and processes each piece independently
void Village::sortInhabitantsByName()
{
	quickSortByName(inhabitants, 0, inhabitants.size() - 1);
}

// Order the inhabitants by power level
// Log-linear sort (quicksort, O(n log n))
// // Slightly more efficient that quadratic sorting for large data sets
// // Divides the data set into smaller parts and processes each piece independently
void Village::sortInhabitantsByPowerLevel()
{
	quickSortByPowerLevel(inhabitants, 0, inhabitants.size() - 1);
}

void Village::quickSortByName(std::vector<NPC> people, int low, int high) {
	if (low < high) {
		std::string pivot = people[high].getName();
		int pos = partitionByName(people, low, high, pivot);

		quickSortByName(people, low, pos - 1);
		quickSortByPowerLevel(people, pos + 1, high);
	}
}

void Village::quickSortByPowerLevel(std::vector<NPC> people, int low, int high) {
	if (low < high) {
		int pivot = people[high].getPowerLevel();
		int pos = partitionByPowerLevel(people, low, high, pivot);

		quickSortByPowerLevel(people, low, pos - 1);
		quickSortByPowerLevel(people, pos + 1, high);
	}
}

int Village::partitionByName(std::vector<NPC> people, int low, int high, std::string pivot)
{
	int i = low;
	int j = low;
	while (i <= high) {
		if (people[i].getName() > pivot) {
			i++;
		}
		else {
			swapNPCs(people, i, j);
			i++;
			j++;
		}
	}
	return j - 1;
}

int Village::partitionByPowerLevel(std::vector<NPC> people, int low, int high, int pivot)
{
	int i = low;
	int j = low;
	while (i <= high) {
		if (people[i].getPowerLevel() > pivot) {
			i++;
		}
		else {
			swapNPCs(people, i, j);
			i++;
			j++;
		}
	}
	return j - 1;
}

void Village::swapNPCs(std::vector<NPC> people, int pos1, int pos2)
{
	NPC temp;
	temp = people[pos1];
	people[pos1] = people[pos2];
	people[pos2] = temp;
}

Village::~Village()
{
}
