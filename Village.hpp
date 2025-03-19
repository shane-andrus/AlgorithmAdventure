#ifndef VILLAGE_HPP
#define VILLAGE_HPP

#include <vector>
#include "NPC.hpp"

class Village
{
private:
    std::string name;
    std::vector<NPC*> inhabitants; // Aggregation: Village contains NPCs

public:
    Village(const std::string& name);
    ~Village(); // Destructor (does not delete NPCs due to aggregation)

    // Methods
    void addInhabitant(NPC* npc);
    void removeInhabitant(NPC* npc);

    // Getters and Setters
    std::string getName() const;
    void setName(const std::string& name);
    const std::vector<NPC*>& getInhabitants() const;
};

#endif // VILLAGE_HPP