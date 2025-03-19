#ifndef HERO_HPP
#define HERO_HPP

#include "GameCharacter.hpp"
#include "Inventory.hpp"

class Hero : public GameCharacter
{
private:
    std::string quest;
    Inventory* inventory; // Composition: Hero owns Inventory

public:
    Hero(const std::string& name, int health, int powerLevel, const std::string& quest);
    ~Hero(); // Destructor to clean up Inventory

    // Getters and Setters
    std::string getQuest() const;
    void setQuest(const std::string& quest);
    Inventory* getInventory() const;

    // Implemented methods
    void act() override;
    void speak() override;
    void interactWith(GameCharacter* target) override;
    void trade(GameCharacter* target) override;
};

#endif // HERO_HPP