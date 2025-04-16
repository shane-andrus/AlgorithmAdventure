#ifndef HERO_HPP
#define HERO_HPP

#include "Item.hpp"
#include "Inventory.hpp"
#include "GameCharacter.hpp"

class Hero : public GameCharacter
{
    public:
    Hero(std::string quest);
    Hero();
    Hero(std::string name, int health, int powerLevel, std::string quest);
    ~Hero();
    void act();
    void speak();
    void interactWith(GameCharacter* target);
    void tradeWith(GameCharacter* target);
    void attack(GameCharacter* target);

    
    std::string quest;
    void setQuest(std::string);
    std::string getQuest();
};


#endif 