#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

class Interactable
{
public:
	virtual void interactWith() = 0;

	virtual void trade() = 0;

	virtual void attack() = 0;

};

#endif