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
    // Constructors and destructor
    GameCharacter();
    GameCharacter(const std::string& name, int health, int powerLevel);
    virtual ~GameCharacter();

    // Getters
    std::string getName() const;
    int getHealth() const;
    int getPowerLevel() const;

    // Virtual methods
    virtual void act();
    virtual void speak();

    // Interactable methods
    virtual void interactWith(GameCharacter* target);
    virtual void trade(GameCharacter* target);
    virtual void attack(GameCharacter* target);

    // Overloaded operator
    friend std::ostream& operator<<(std::ostream& os, const GameCharacter& character);
};

#endif