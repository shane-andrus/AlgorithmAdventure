#include "GameCharacter.hpp"

GameCharacter::GameCharacter(std::string name, int health, int powerLevel)
    : name(name), health(health), powerLevel(powerLevel) {
}

GameCharacter::~GameCharacter() {}
