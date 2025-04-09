#include <string>
#include <ostream>

class NPC {
    std::string role;
public:
    NPC(const std::string& name) : name(name) {}

    friend std::ostream& operator<<(std::ostream& os, const NPC& npc) {
        os << "NPC Name: " << npc.name;
        return os;
    }

private:
    std::string name;
};