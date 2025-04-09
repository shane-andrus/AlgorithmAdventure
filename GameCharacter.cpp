#include "GameCharacter.hpp"

gameCharacter::gameCharacter()
{
	name = "Unknown";
	health = 100;
	powerlevel = 10;
}
gameCharacter::gameCharacter(std::string n, int h, int p) : name(n), health(h), powerlevel(p) {}
std::string gameCharacter::getName() const
{
	return name;
}

int gameCharacter::getHealth() const
{
	return 0;
}
int gameCharacter::getPowerLevel() const
{
	return 0;
}