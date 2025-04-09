#include <iostream>
#include <string>

#ifndef VILLIAN_HPP
#define VILLIAN_HPP

class Villain {
protected:
	std::int evilPoints;

public:
	Villain(std::int);

	act();
	speak();
	interactWith(GameCharacter target);
	trade(GameCharacter target);
	attack(GameCharacter target);

};

#endif 