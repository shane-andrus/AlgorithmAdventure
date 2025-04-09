
#include "Hero.hpp"
#include "NPC.hpp"
#include "Villain.hpp"
#include "Village.hpp"
#include <iostream>

int main(){

	NPC guy; 
	NPC jim("Merchant", "jim");
	Hero me;
	Villain badguy;

	Vilage village("Village Name");
	

	me.setName("Hero");
	me.setHealth(1200);
	me.setPower(200);
	me.setQuest("Save the world");

	guy.setName("NPC NAME");
	guy.setHealth(90);
	guy.setPower(50);
	guy.setRole("Merchant");

	badguy.setName("Villain");
	badguy.setHealth(1000);
	badguy.setPower(300);
	badguy.setEvilPoints(100);
	
	me.speak();
	std::cout << std::endl;
	guy.speak();
	std::cout << std::endl;
	jim.speak();
	std::cout << std::endl;
	badguy.speak();	
	std::cout << std::endl;

	std::cout << "------------------------" << std::endl;

	me.interactWith(&guy);
	me.act();
	me.trade(&guy);
	me.attack(&guy);
	std::cout << std::endl;

	guy.interactWith(&me);
	guy.act();
	guy.trade(&me);
	guy.attack(&me);
	std::cout << std::endl;

	badguy.interactWith(&me);
	badguy.act();
	badguy.trade(&me);
	badguy.attack(&me);
	std::cout << std::endl;

	std::cout << "------------------------" << std::endl;

	std::cout << "Vilage name: " << village.getName() << std::endl;

	village.addinhabiant(&guy);
	village.addinhabiant(&jim);

	village.setName("New Village Name");
	
	village.listInhabiants();
	NPC john("John", "John");

	village.addinhabiant(&john);
	village.removeinhabiant(&guy);
	std::cout << std::endl;
	std::cout << "Vilage name: " << village.getName() << std::endl;


	village.listInhabiants();

	std::cout << "------------------------" << std::endl;

	std::cout << "Hero's backpack size: " << me.getBackPacksize() << std::endl;
	me.addItemToBackpack(Item());
	me.addItemToBackpack(Item());
	std::cout << "Hero's backpack size: " << me.getBackPacksize() << std::endl;
	me.removeItemFromBackpack(Item());
	std::cout << "Hero's backpack size: " << me.getBackPacksize() << std::endl;
	return 0;
}

