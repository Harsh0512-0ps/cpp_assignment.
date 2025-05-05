//	Write a C++ program to demonstrate the use of const_cast by modifying a constant variable.
#include <iostream>
using namespace std;

void modifyConstValue(const int* ptr) {
    // Removing the constness using const_cast
    int* modifiablePtr = const_cast<int*>(ptr);
    *modifiablePtr = 100; // Modifying the value
}

int main() {
    const int num = 50;
    cout << "Before modification: " << num << endl;

    modifyConstValue(&num);

    cout << "After modification: " << num << endl; // Undefined behavior
    return 0;
}
