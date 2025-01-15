
#include <iostream>
using namespace std;

class Animal {

public:
    int id;
    void makeSound() {
        cout << "Parent class Make sound" << endl;
    }
};

class Dog : public Animal {
public:
    int id;
    void makeSound() {
        cout << "Child class code is run" << endl;
    }
    void bark() {
        cout << "The dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.makeSound();  // Call base class method
    myDog.bark();       // Call derived class method
    return 0;
}
            