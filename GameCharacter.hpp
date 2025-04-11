#include <iostream>  
#include <string>  

#ifndef GAMECHARACTER_HPP  
#define GAMECHARACTER_HPP  

class GameCharacter {  
protected:  
   std::string name;  
   int health;   
   int powerLevel;  

public:  
   GameCharacter(std::string name, int health, int powerLevel); 
   void healthDrain(int damage);
   virtual void act() = 0;   
   virtual void speak() = 0; 
};  

#endif