
#include <iostream>
#include <string>

class GameCharacter
{
public:
	virtual void act() = 0;
	virtual void speak() = 0;

private:
	std::string name;
	int health;
	int power;

};