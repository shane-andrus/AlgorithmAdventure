#ifndef NPC_HPP
#define NPC_HPP
#include "GameCharacter.hpp"

class NPC : public GameCharacter{
private:
	std::string role;
public:
    NPC(const std::string& name, int health, int powerLevel, const std::string& role);
    virtual void act() = 0;
    virtual void speak() = 0;

    std::string getName() const;
    int getHealth() const;
    int getPowerLevel() const;
    std::string getRole() const;
    virtual ~NPC() = default;

}
#endif 