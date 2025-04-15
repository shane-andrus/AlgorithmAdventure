#ifndef VILLAIN_HPP
#define VILLAIN_HPP

#include <string>
#include <ostream>
#include "GameCharacter.hpp"

class Villain : public GameCharacter 
{
public:
    Villain();
    Villain(const std::string& evilPlan);
    std::string getEvilPlan();
    void setEvilPlan(std::string evilPlan);
    void act();
    void speak();
    void interactWith(GameCharacter* target);
    void trade(GameCharacter* target);
    void attack(GameCharacter* target);   

    std::string evilPlan;
};


#endif// VILLAIN_HPP