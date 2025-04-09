#ifndef GameCharacter_HPP
#define GameCharacter_HPP
#include <string>

class GameCharacter{
public:
	GameCharacter();
    GameCharacter(std::string name, int health, int powerlevel);
	virtual void speak() = 0;
	virtual void act() = 0;
    virtual std::string getName() = 0;
    virtual int getHealth() = 0;
    virtual int getPowerLevel() = 0;
    virtual ~GameCharacter();
private:
	std::string name;
	int health;
	int powerLevel;
};







#endif