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
    GameCharacter(const std::string& name, int health, int powerLevel);
    virtual ~GameCharacter();

    // getters
    std::string getName() const;
    int getHealth() const;
    int getPowerLevel() const;

    // virtual methods
    virtual void act() = 0;
    virtual void speak() = 0;

    // interactable methods
    virtual void interactWith(GameCharacter* target) = 0;
    virtual void trade(GameCharacter* target) = 0;
    virtual void attack(GameCharacter* target) = 0;

    // overloaded operator
    friend std::ostream& operator<<(std::ostream& os, const GameCharacter& character);
};

#endif
