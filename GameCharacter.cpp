#include "GameCharacter.hpp"  
#include <iostream>  

GameCharacter::GameCharacter()
{
}

GameCharacter::GameCharacter(std::string name, int health, int powerlevel) :name(name), health(health), powerLevel(powerlevel) {
  
}  

std::string GameCharacter::getName() { // Add the class scope resolution operator  
	return name;  
}  

void GameCharacter::act() { // Add the class scope resolution operator  
std::cout << "I act it up" << std::endl;  
}  

void GameCharacter::speak() { // Add the class scope resolution operator  
std::cout << "Yap yap yap" << std::endl;  
}

void GameCharacter::interactWithgameCharacter(GameCharacter& target)
{
	std::cout << "I interact with " << target.getName() << std::endl;
}

void GameCharacter::trade(GameCharacter& target)
{
	std::cout << "I trade with " << target.getName() << std::endl;	
}

void GameCharacter::attack(GameCharacter& target)
{
	std::cout << "I attack " << target.getName() << std::endl;	
}
