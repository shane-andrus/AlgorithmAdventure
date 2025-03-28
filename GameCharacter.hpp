#ifndef GAMECHARACTER_HPP
#define GAMECHARACTER_HPP

#include <string>

class GameCharacter {
protected:
    std::string name;
    int health;
    int powerLevel;
public:
    GameCharacter(std::string, int, int);
    virtual void act() = 0;
    virtual void speak() = 0;
    virtual std::string getName();
    void setName(std::string);
    int getHealth();
    void setHealth(int);
    int getPowerLevel();
    void setPowerLevel(int);
};

#endif