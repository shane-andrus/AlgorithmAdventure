#ifndef GAMECHARACTER_HPP
#define GAMECHARACTER_HPP

#include <string>
#include <iostream>
#include "Interactable.hpp"

class GameCharacter : public Interactable {
protected:
    std::string name;
    int health;
    int powerLevel;

public:
    // constructors and destructor
    GameCharacter();
    GameCharacter(const std::string name, int health, int powerLevel);
    
    virtual ~GameCharacter();

    // getters
    std::string getName();
    int getHealth();
    int getPowerLevel();

    

    //setters
    void setName(std::string name);
    void setHealth(int health);
    void setPowerLevel(int powerLevel);
    

    // virtual methods
    virtual void act();
    virtual void speak();

    // interations
    void interactWith(GameCharacter* target);
    void tradeWith(GameCharacter *target);
    void attack(GameCharacter* target);
    

    // overload
    friend std::ostream& operator<<(std::ostream& os, const GameCharacter& character);
};

#endif