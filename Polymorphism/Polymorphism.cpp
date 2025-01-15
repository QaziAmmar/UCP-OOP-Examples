#include <iostream>
using namespace std;

class Base {
public:
   virtual void print() { cout << "print base class\n"; }  // Virtual function
    // void show() { cout << "show base class\n"; }            // Non-virtual function
};

class Derived : public Base {
public:
    void print() { cout << "print derived class\n"; }  // Overriding virtual function
    void show() { cout << "show derived class\n"; }             // Overriding non-virtual function
};

int main() {
    Derived* bptr = new Derived();          // Base class pointer
    Derived d;           // Derived class object
    // bptr = &d;           // Base pointer points to Derived object

    bptr->print();       // Virtual function: resolved at runtime (late binding)
    // bptr->show();        // Non-virtual function: resolved at compile time (early binding)

    
    // d.print();/
    return 0;
}