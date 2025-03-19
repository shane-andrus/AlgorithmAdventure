#ifndef GAMECHARACTER_HPP
#define GAMECHARACTER_HPP

#include <string>
#include "Interactable.hpp"

class GameCharacter : public Interactable
{
protected:
    std::string name;
    int health;
    int powerLevel;

public:
    GameCharacter(const std::string& name, int health, int powerLevel);
    virtual ~GameCharacter() = default; // Virtual destructor

    // Getters and Setters
    std::string getName() const;
    void setName(const std::string& name);
    int getHealth() const;
    void setHealth(int health);
    int getPowerLevel() const;
    void setPowerLevel(int powerLevel);

    // Abstract methods
    virtual void act() = 0;
    virtual void speak() = 0;
};

#endif // GAMECHARACTER_HPP