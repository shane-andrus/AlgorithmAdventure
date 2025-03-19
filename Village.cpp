#include <iostream>
#include "Village.hpp"

Village::Village(const std::string& name) : name(name) {}

Village::~Village() {
    // Aggregation: Village does not own NPCs, so no deletion here
}

void Village::addInhabitant(NPC* npc) {
    inhabitants.push_back(npc);
    std::cout << npc->getName() << " has joined the village of " << name << std::endl;
}

void Village::removeInhabitant(NPC* npc) {
    for (auto it = inhabitants.begin(); it != inhabitants.end(); ++it) {
        if (*it == npc) {
            inhabitants.erase(it);
            std::cout << npc->getName() << " has left the village of " << name << std::endl;
            break;
        }
    }
}

std::string Village::getName() const {
    return name;
}

void Village::setName(const std::string& name) {
    this->name = name;
}

const std::vector<NPC*>& Village::getInhabitants() const {
    return inhabitants;
}