#ifndef GAMECHARACTER_HPP
#define GAMECHARACTER_HPP

#include <string>

class GameCharacter
{
public:
	GameCharacter();
	GameCharacter(std::string name, int health, int powerLevel);
	virtual ~GameCharacter();

	virtual void act() = 0;
	virtual void speak() = 0;
protected:
	std::string name;
	int health;
	int powerLevel;
}

#endif