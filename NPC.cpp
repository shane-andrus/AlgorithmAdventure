#include "GameCharacter.hpp"
#include "NPC.hpp"

NPC::NPC(std::string role)
{
}

void NPC::act()
{
}

void NPC::speak()
{
}

void NPC::interactWith(GameCharacter target)
{
}

void NPC::trade(GameCharacter target)
{
}

void NPC::attack(GameCharacter target)
{
	GameCharacter::healthDrain(50);
}


