#include "GameCharacter.hpp"

GameCharacter::GameCharacter(const std::string& name, int health, int powerLevel)
    : name(name), health(health), powerLevel(powerLevel) {}

std::string GameCharacter::getName() const {
    return name;
}

void GameCharacter::setName(const std::string& name) {
    this->name = name;
}

int GameCharacter::getHealth() const {
    return health;
}

void GameCharacter::setHealth(int health) {
    this->health = health;
}

int GameCharacter::getPowerLevel() const {
    return powerLevel;
}

void GameCharacter::setPowerLevel(int powerLevel) {
    this->powerLevel = powerLevel;
}