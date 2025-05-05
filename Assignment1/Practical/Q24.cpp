//  Write a C++ program to demonstrate the use of reinterpret_cast to convert an int to a char.
#include <iostream>

int main() {
    int num = 65; // ASCII value of 'A'
    char* charPtr = reinterpret_cast<char*>(&num);
    
    std::cout << "Integer value: " << num << std::endl;
    std::cout << "Character value: " << *charPtr << std::endl;
    
    return 0;
}