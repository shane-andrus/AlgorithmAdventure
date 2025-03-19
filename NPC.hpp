#ifndef NPC_HPP
#define NPC_HPP

#include "GameCharacter.hpp"

class NPC : public GameCharacter
{
private:
    std::string role;

public:
    NPC(const std::string& name, int health, int powerLevel, const std::string& role);

    // Getters and Setters
    std::string getRole() const;
    void setRole(const std::string& role);

    // Implemented methods
    void act() override;
    void speak() override;
    void interactWith(GameCharacter* target) override;
    void trade(GameCharacter* target) override;
};

#endif // NPC_HPP