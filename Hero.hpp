#ifndef HERO_HPP
#define HERO_HPP

#include "GameCharacter.hpp"
#include "Inventory.hpp"

class Hero : public GameCharacter {
private:
	std::string quest;
	Inventory inventory;
public:
    Hero(const std::string& name, int health, int powerLevel, const std::string& quest);
    virtual void act() = 0;
    virtual void speak() = 0;
	void addItemToInventory(const Item& item);
	void removeItemFromInventory(const std::string& itemName);
    void showInventory() const;

    std::string getName() const;
    int getHealth() const;
    int getPowerLevel() const;
    std::string getQuest() const;
    virtual ~Hero() = default;
};

#endif 