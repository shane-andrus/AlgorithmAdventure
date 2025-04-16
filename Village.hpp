#ifndef VILLAGE_HPP
#define VILLAGE_HPP

#include "NPC.hpp"
#include <vector>
#include <string>

class Village {
private:
    std::string name;
    std::vector<NPC*> inhabitants;

public:
    Village(const std::string& name);
    Village();
    ~Village();

    void addInhabitant(NPC* npc);
    void removeInhabitant(NPC* npc);
    void listInhabitants() const;

    void setName(const std::string& name);
    const std::vector<NPC*>& getInhabitants() const;
    const std::string& getName() const;
};

#endif
