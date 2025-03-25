

class Interactable
{
public:
	virtual void interactWith(GameCharacter target) = 0;

	virtual void trade(GameCharacter target) = 0;

	virtual void attack(GameCharacter target) = 0;

};