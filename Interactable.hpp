#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP


class GameCharacter;

class Interactable {
public:


    virtual void interactWith(GameCharacter* target);

    
    virtual void trade(GameCharacter* target);
    
    
    virtual void attack(GameCharacter* target);

    virtual ~Interactable() = default;
};

#endif
