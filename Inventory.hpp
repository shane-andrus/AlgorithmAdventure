#ifndef Inventory_HPP
#define Inventory_HPP
#include <string>
#include <vector>
#include "Item.hpp"
#include "GameCharacter.hpp"
#include "Interactable.hpp"
#include "Hero.hpp"
#include "Villain.hpp"
class Inventory {
public:
	Inventory();
	Inventory(std::string name, std::vector<Item> items);
	void addItem(Item item);
	void removeItem(Item item);
	void displayItems();
	std::string getName();
	std::vector<Item> getItems();
	void interactWith(GameCharacter& charAct);
	void trade(GameCharacter& charAct);
	void attack(GameCharacter& charAct);
private:
	std::string name;
	std::vector<Item> items;
};


#endif // !Inventory_HPP
