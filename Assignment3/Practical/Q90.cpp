//90. Write a class Animal and implement a virtual base class to avoid the diamond problem in inheritance. 
#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Mammal : virtual public Animal {
};

class Bird : virtual public Animal {
};

class Bat : public Mammal, public Bird {
};

int main() {
    Bat b;
    b.sound();

    return 0;
}
