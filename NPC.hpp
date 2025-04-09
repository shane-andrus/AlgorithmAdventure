#ifndef NPC_HPP
#define NPC_HPP

#include <string>
#include <ostream>
#include "GameCharacter.hpp"

class NPC : public GameCharacter {
    public:
        NPC();
        NPC(const std::string& role); 
        std::string getRole() const;
        void act() override;
        void speak() override ;
        void interactWith(GameCharacter* target) override;
        void trade(GameCharacter* target) override;
        void attack(GameCharacter* target) override;
    
        
    
    
        std::string role;
    };

#endif // NPC_HPP