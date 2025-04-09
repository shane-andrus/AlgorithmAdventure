#include <string>
#include "Inventory.hpp"


class Item: public Inventory {
private:
   std::string name;
   int value;
public:
   //Getters and Setters
   std::string getName() const { return name; }
   int getValue() const { return value; }
   void setName(const std::string& n) { name = n; }
   void setValue(int v) { value = v; }
   Item(std::string n, int v) : name(n), value(v) {} // Constructor
   Item() : name("Unknown"), value(0) {} // Default constructor

};