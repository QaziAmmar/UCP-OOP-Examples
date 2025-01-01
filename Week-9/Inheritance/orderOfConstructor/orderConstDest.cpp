#include <iostream>
using namespace std;

class Base {
public:
    Base(int x, int y) {
        cout << "Base class parameterized constructor called with value: " << x << endl;
    }
    ~Base() {
        cout << "Base class destructor called" << endl;
    }
};

class Derived : public Base {
public:
    Derived(int x, int y) : Base(x, y) { // Explicitly call Base constructor
        cout << "Derived class parameterized constructor called with value: " << y << endl;
    }
    ~Derived() {
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    Derived *obj = new Derived(10, 20);
    delete obj;
    return 0;
}
