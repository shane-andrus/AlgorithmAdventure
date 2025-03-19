#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

class GameCharacter; // Forward declaration

class Interactable
{
public:
    virtual void interactWith(GameCharacter* target) = 0;
    virtual void trade(GameCharacter* target) = 0;
    virtual ~Interactable() = default; // Virtual destructor for proper cleanup
};

#endif // INTERACTABLE_HPP