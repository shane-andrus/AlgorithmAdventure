#include "Inventory.hpp"
Inventory::Inventory() : name("Default Inventory"), items() {
}
Inventory::Inventory(std::string name, std::vector<Item> items) : name(name), items(items) {
}
void Inventory::addItem(Item item) {
	items.push_back(item);
}
void Inventory::removeItem(Item item) {
	auto it = std::remove_if(items.begin(), items.end(), [&](const Item& i) { return i.getName() == item.getName(); });
	if (it != items.end()) {
		items.erase(it, items.end());
	}
}
void Inventory::displayItems() {  
   std::cout << "Items in " << name << ":" << std::endl;  
   for (auto& item : items) { // Remove const qualifier from item  
       item.displayItemInfo();  
   }  
}
std::string Inventory::getName() {
	return name;
}
std::vector<Item> Inventory::getItems() {
	return items;
}
void Inventory::interactWith(GameCharacter& charAct) {  
   std::cout << "Interacting with " << charAct.getName() << std::endl;  
}

void Inventory::trade(GameCharacter& charAct) {  
std::cout << "Trading with " << charAct.getName() << std::endl;  
}  

void Inventory::attack(GameCharacter& charAct) {  
std::cout << "Attacking " << charAct.getName() << std::endl;  
}
void Inventory::trade(GameCharacter& charAct) {
	std::cout << "Trading with " << charAct.getName() << std::endl;
}
Inventory::~Inventory() {
}
Inventory::Inventory(const Inventory& other) : name(other.name), items(other.items) {
}
Inventory& Inventory::operator=(const Inventory& other) {
	if (this != &other) {
		name = other.name;
		items = other.items;
	}
	return *this;
}
Inventory::Inventory(Inventory&& other) noexcept : name(std::move(other.name)), items(std::move(other.items)) {
}
