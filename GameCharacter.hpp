#ifndef GAMECHARACTER_HPP
#define GAMECHARACTER_HPP

#include "Interactable.hpp"
#include <iostream>
#include <string>
	

class GameCharacter : public Interactable {
protected:
    std::string name;
    int health;
    int powerLevel;

public:
    GameCharacter();
    GameCharacter(std::string name, int health, int powerlevel);
    std::string getName();
    virtual ~GameCharacter() = default;

    std::string getName() const { return name; }
    virtual void act() = 0;
    virtual void speak() = 0;
    void interactWithgameCharacter(GameCharacter& target);
    virtual void trade(GameCharacter& target) = 0;
    virtual void attack(GameCharacter& target) = 0;
};
#endif