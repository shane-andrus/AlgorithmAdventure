#ifndef VILLAIN_HPP
#define VILLAIN_HPP

#include "GameCharacter.hpp"

class Villain : public GameCharacter
{
private:
    int evilPoints;

public:
    Villain(const std::string& name, int health, int powerLevel, int evilPoints);

    // Getters and Setters
    int getEvilPoints() const;
    void setEvilPoints(int evilPoints);

    // Implemented methods
    void act() override;
    void speak() override;
    void interactWith(GameCharacter* target) override;
    void trade(GameCharacter* target) override;
};

#endif // VILLAIN_HPP