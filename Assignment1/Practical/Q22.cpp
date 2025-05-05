//	Write a C++ program to demonstrate the use of dynamic_cast for safe downcasting in a polymorphic class hierarchy.
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void speak() { cout << "Animal speaks" << endl; }
    virtual ~Animal() {} // Virtual destructor for polymorphism
};

// Derived class 1
class Dog : public Animal {
public:
    void speak() override { cout << "Dog barks" << endl; }
    void fetch() { cout << "Dog fetches the ball" << endl; }
};

// Derived class 2
class Cat : public Animal {
public:
    void speak() override { cout << "Cat meows" << endl; }
    void scratch() { cout << "Cat scratches the furniture" << endl; }
};

int main() {
    Animal* animal1 = new Dog(); // Upcasting, works fine
    Animal* animal2 = new Cat(); // Upcasting, works fine

    // Safe downcasting using dynamic_cast
    Dog* dog = dynamic_cast<Dog*>(animal1);
    if (dog) {
        dog->speak();
        dog->fetch(); // Safe downcast, works fine
    } else {
        cout << "Downcasting to Dog failed" << endl;
    }

    Cat* cat = dynamic_cast<Cat*>(animal1);
    if (cat) {
        cat->speak();
        cat->scratch(); // This will not be executed because animal1 is a Dog, not a Cat
    } else {
        cout << "Downcasting to Cat failed" << endl; // This will be printed
    }

    // Clean up
    delete animal1;
    delete animal2;

    return 0;
}