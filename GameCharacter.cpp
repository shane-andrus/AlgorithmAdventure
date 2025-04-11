#include "GameCharacter.hpp"

GameCharacter::GameCharacter(const std::string& name, int health, int powerLevel)
	: name(name), health(health), powerLevel(powerLevel) {
}

std::string GameCharacter::getName() const {
	return name;
}

int GameCharacter::getHealth() const {
	return health;
}

int GameCharacter::getPowerLevel() const {
	return powerLevel;
}