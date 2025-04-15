#ifndef ITEM
#define ITEM

#include <string>

class Item 
{
    private:
    std::string name;
    int value;

    public:
    std::string getName();
    int getValue();
    void setName(std::string name);
    void setValue(int value);



};


#endif  //ITEM