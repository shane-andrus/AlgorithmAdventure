#include "Hero.hpp."
#include "Villain.hpp"
#include "Village.hpp"
#include <iostream>
#include <string>
#include "NPC.hpp"

int main() {

	Hero Steve("Steve", 4000, 7);
	Villain Wibbles("Wibbles", 5, 100);
	NPC Schtubert("Schtubert", 100, 5, "Wolloper");
	Item fork("Fork", 1);
	Village town;

	Steve.speak();
	Steve.act();
	Steve.interactWithgameCharacter(Wibbles);
	Steve.trade(Wibbles);
	Steve.attack(Wibbles);


	std::cout << std::endl;


	Wibbles.act();
	Wibbles.speak();
	Wibbles.interactWithgameCharacter(Steve);
	Wibbles.trade(Steve);
	Wibbles.attack(Steve);

	std::cout << std::endl;

	Schtubert.speak();
	Schtubert.act();	
	Schtubert.interactWithgameCharacter(Steve);
	Schtubert.trade(Steve);
	Schtubert.attack(Steve);
	town.addInhabitant(&Schtubert);

		return 0;
}
