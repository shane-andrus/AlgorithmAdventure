#ifndef GAMECHARACTER_HPP
#define GAMECHARACTER_HPP

#include <string>
#include <vector>

#include "Inventory.hpp"

class GameCharacter {
protected:
    std::string name;
    int health;
    int powerLevel;
    Inventory inventory;
public:
    GameCharacter(std::string, int);
    virtual void act() = 0;
    virtual void speak() = 0;
    virtual std::string getName();
    void setName(std::string);
    int getHealth();
    void setHealth(int);
    int getPowerLevel();
    void setPowerLevel(int);
    Inventory getInventory();
    virtual ~GameCharacter();
};

#endif