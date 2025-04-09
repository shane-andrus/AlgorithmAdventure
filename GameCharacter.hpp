#ifndef GAMECHARACTER_HPP
#define GAMECHARACTER_HPP

#include <string>

class GameCharacter
{
public:
	GameCharacter(std::string, int, int);
	virtual ~GameCharacter();

	virtual void act() = 0;
	virtual void speak() = 0;

	std::string getName() const { return name; };
	int getHealth() const { return health; };
	int getPowerLevel() const { return powerLevel; };

	void takeDamage(int damage) { health -= damage; };
protected:
	std::string name;
	int health;
	int powerLevel;
};

#endif