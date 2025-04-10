#include "GameCharacter.hpp"

gameCharacter::gameCharacter()
{
name = "Unknown";
health = 100;
powerlevel = 10;
}

gameCharacter::gameCharacter(const std::string& n, int h, int p) : name(n), health(h), powerlevel(p) {}


std::string gameCharacter::getName() const
{
return name;
}

int gameCharacter::getHealth() const
{
return health; // Fixed to return the correct member variable
}

int gameCharacter::getPowerLevel() const
{
	return powerlevel; // Fixed to return the correct member variable
}
