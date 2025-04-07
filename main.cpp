#include <iostream>
#include "Inventory.hpp"

int main() {
    Inventory inventory;

    Item potion("Health Potion", 50);
    Item sword("Iron Sword", 120);

    inventory.addItem(potion);
    inventory.addItem(sword);

    inventory.listItems();

    inventory.removeItem("Health Potion");
    inventory.listItems();

    inventory.removeItem("Bow"); // Trying to remove an item that doesn’t exist

    return 0;
}
