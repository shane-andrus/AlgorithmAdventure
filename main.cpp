#include <vector>

#include "Hero.hpp"
#include "Item.hpp"
#include "Village.hpp"
#include "NPC.hpp"

int main() {
	// Creating Ruport the Rich
	Hero ruportTheRich("Ruport the Rich", 4);

	// Creating treasures
	Item goldNecklace("gold necklace", 20);
	Item pearlNecklace("pearl necklace", 70);
	Item goldRingWithDiamonds("gold ring with diamonds", 450);
	Item goldRingWithRuby("gold ring with a ruby", 80);
	Item silverSpoon("silver spoon", 7);

	// Creating a treasure trove
	std::vector<Item> treasures = { goldNecklace, pearlNecklace, goldRingWithDiamonds, goldRingWithRuby, silverSpoon };

	// Baron Ruport the Rich claims the treasures
	// Composition: Heros have inventories, but inventories can't exist without a hero
	// Aggregation: Inventorites can have items, but items can exist outside of inventories
	while (treasures.size() > 0) {
		ruportTheRich.getInventory().addItem(treasures[0]);
		treasures.erase(treasures.begin());
	}

	// Finding the index of the gold ring with a ruby
	int indexOfGoldRingWithRuby = ruportTheRich.getInventory().findItem("gold ring with a ruby");
	
	// Finding the index of the treasure worth 70
	int indexOf70Treasure = ruportTheRich.getInventory().findSortedItem(70);

	// Organizing the treasures by name
	ruportTheRich.getInventory().sortItemsByName();

	// Organizing the treasures by value
	ruportTheRich.getInventory().sortItemsByValue();
	
	// Creating the village of Stonetown
	Village stonetown("Stonetown");

	// Creating warriors
	NPC george("George", 12, "warrior");
	NPC galahad("Galahad", 11, "warrior");
	NPC siegfried("Siegfried", 10, "warrior");
	NPC robert("Robert the Crafty", 9, "warrior");
	NPC rodrigo("Rodrigo el Cid", 8, "warrior");
	NPC william("William the Great", 7, "warrior");
	NPC richard("Richard the Lionhearted", 6, "warrior");
	NPC james("James", 5, "warrior");
	NPC bertrand("Bertrand the Eagle", 4, "warrior");
	NPC edward("Edward the Prince", 3, "warrior");
	NPC henry("Henry the Hotspur", 2, "warrior");

	// The warriors move to Stonetown
	// Aggregation: Villages can contain NPCs, but NPCs can exist outside of villages
	stonetown.addInhabitant(bertrand);
	stonetown.addInhabitant(edward);
	stonetown.addInhabitant(galahad);
	stonetown.addInhabitant(george);
	stonetown.addInhabitant(henry);
	stonetown.addInhabitant(james);
	stonetown.addInhabitant(richard);
	stonetown.addInhabitant(robert);
	stonetown.addInhabitant(rodrigo);
	stonetown.addInhabitant(siegfried);
	stonetown.addInhabitant(william);

	// Ordering the warriors by power level
	stonetown.sortInhabitantsByPowerLevel();

	return 0;
}