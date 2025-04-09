#include "Village.hpp"

Village::Village(std::string name, std::vector<NPC> inhabitants) : name(name), inhabitants(inhabitants) {
	std::cout << "Village created!: " << name << std::endl;
}

Village::~Village() {
	std::cout << "Village destroyed!: " << name << std::endl;
}

void Village::addInhabitant(const NPC& character) {
	inhabitants.push_back(character);
	std::cout << "Added inhabitant: " << character.getName() << std::endl;
}

void Village::removeInhabitant(const std::string& name) {
	for (auto it = inhabitants.begin(); it != inhabitants.end(); ++it) {
		if (it->getName() == name) {
			std::cout << "Removed inhabitant: " << it->getName() << std::endl;
			inhabitants.erase(it);
			return;
		}
	}
	std::cout << "Inhabitant not found: " << name << std::endl;
}

std::string Village::listInhabitants() {
	std::string list;
	for (const auto& inhabitant : inhabitants) {
		list += inhabitant.getName() + "\n";
	}
	return list;
}