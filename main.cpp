#include <ostream>
#include <iostream>
#include <string>
#include "NPC.cpp"
int main() {
    NPC merchant("Merchant");

    std::cout << merchant << std::endl;

    return 0;
} 


//g++ -o main main.cpp NPC.cpp GameCharacter.cpp 
//./main