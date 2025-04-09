#include "GameCharacter.hpp"
#include <iostream>
#include <string>

	
	GameCharacter::GameCharacter():name("N/A"),health(100),powerLevel(10){
	}
	GameCharacter::GameCharacter(std::string name, int health, int powerlevel):name(name),health(health),powerLevel(powerlevel){

	}
	void speak() {
		std::cout << "word" << std::endl;
	}
	void act() {
		std::cout << "act" << std::endl;
	}
	std::string GameCharacter::getName(){
		return name;
	}
	int GameCharacter::getHealth(){
		return health;
	}

	int GameCharacter::getPowerLevel(){
		return powerLevel;
	}

	GameCharacter::~GameCharacter(){}
}