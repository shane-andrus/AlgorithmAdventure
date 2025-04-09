#include <vector>

#include "Village.hpp"
#include "NPC.hpp"
#include "Item.hpp"

int main() {
	// Creating the village of Stonetown
	Village stonetown("Stonetown");

	// Creating the Baron Ruport the Rich
	NPC ruportTheRich("Ruport the Rich", 4, "Baron");

	// Creating treasures
	Item goldNecklace("gold necklace", 20);
	Item pearlNecklace("pearl necklace", 70);
	Item goldRingWithDiamonds("gold ring with diamonds", 450);
	Item goldRingWithRuby("gold ring with a ruby", 80);
	Item silverSpoon("silver spoon", 7);

	// Creating a treasure trove
	std::vector<Item> treasures = { goldNecklace, pearlNecklace, goldRingWithDiamonds, goldRingWithRuby, silverSpoon };

	// Baron Ruport the Rich claims the treasures
	while (treasures.size() > 0) {
		ruportTheRich.getInventory().addItem(treasures[0]);
		treasures.erase(treasures.begin());
	}

	// Finding the index of the gold ring with a ruby
	int indexOfGoldRingWithRuby = ruportTheRich.getInventory().findItem("gold ring with a ruby");
	
	// Finding the index of the treasure worth 70
	int indexOf70Treasure = ruportTheRich.getInventory().findSortedItem(70);
	
	// Baron Ruport the Rich visits Stonetown
	stonetown.addInhabitant(ruportTheRich);

	return 0;
}