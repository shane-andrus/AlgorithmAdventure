#ifndef GAMECHARACTER_HPP
#define GAMECHARACTER_HPP

#include <string>
#include "Interactable.hpp"

class GameCharacter : public Interactable {
protected:
    std::string name;
    int health;
    int powerLevel;

public:
    GameCharacter(const std::string& name, int health, int powerLevel);
    virtual void act() = 0;
    virtual void speak() = 0;

    std::string getName() const;
    int getHealth() const;
    int getPowerLevel() const;
    virtual ~GameCharacter() = default;
};

#endif