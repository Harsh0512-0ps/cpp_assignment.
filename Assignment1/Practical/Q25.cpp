//  Write a C++ program to demonstrate the use of C-style casting by converting an int to a double.
#include <iostream>

int main() {
    int num = 10; // Integer variable
    double convertedNum = (double)num; // C-style casting

    // Output the result
    std::cout << "Original integer: " << num << std::endl;
    std::cout << "Converted to double: " << convertedNum << std::endl;

    return 0;
}