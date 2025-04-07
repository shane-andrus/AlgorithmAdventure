#include <iostream>
#include <ostream>
#include "NPC.hpp"
#include "GameCharacter.hpp"


NPC::NPC(const std::string& role)
{
    std::cout << "NPC created!" << "\nRole: " << role << std::endl;
}


NPC::NPC() : role("N/A")
{
    std::cout << "NPC created!" << std::endl;
}



    

    
std::string NPC::getRole() 
{
        return role;
}

