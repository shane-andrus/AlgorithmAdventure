#include<istream>
#include<ostream>
#include<string>

#include "Hero.hpp"
#include "Inventory.hpp"

Hero::Hero(): GameCharacter() 
{
    this->setQuest("None");
}

Hero::Hero(std::string name, int health, int powerLevel, std::string quest): GameCharacter(name, health, powerLevel)
{
    this->setName(name);
    this->setHealth(health);
    this->setPowerLevel(powerLevel);
    this->setQuest(quest);

}

void Hero::act()
{
    std::cout << this->getName() << " is acting!";
}


void Hero::speak()
{
    std::cout << "I'm the hero!" 
    << "\nMy name is: " << this->getName() 
    << "\nI have " << this->getHealth() << "health"
    << "\nI am level " << this->getPowerLevel()
    << "\nMy quest is " << this->getQuest() << std::endl;

}

void Hero::interactWith(GameCharacter* target)
{
    std::cout << this->getName() << " is interacting with " << target->getName() << "!" << std::endl;
}

void Hero::tradeWith(GameCharacter* target)
{
    std::cout << this->getName() << " is trading with " << target->getName() << "!" << std::endl;
}

void Hero::attack(GameCharacter* target)
{
    std::cout << this->getName() << " attacks " << target->getName() << "!" << std::endl;
}

void Hero::setQuest(std::string)
{
    this->quest = quest;
}

std::string Hero::getQuest()
{
    return quest;
}
