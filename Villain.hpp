#ifndef VILLAIN_HPP
#define VILLAIN_HPP
#include "GameCharacter.hpp"

class Villain : public GameCharacter {
private:
	int evilPoints;
public:
    Villain(const std::string& name, int health, int powerLevel, int evilPoints);
    virtual void act() = 0;
    virtual void speak() = 0;

    std::string getName() const;
    int getHealth() const;
    int getPowerLevel() const;
    int getEvilPoints() const;
    virtual ~Villain() = default;
};
#endif 