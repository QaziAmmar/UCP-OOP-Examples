#include <iostream>
using namespace std;


class Parent {
public:
    virtual void display() {
        cout << "Parent class display" << endl;
    }

    void show() {
        cout << "Parent class show" << endl;
    }
};

class Child : public Parent {
public:
    void display() override {
        cout << "Child class display" << endl;
    }

    void show() {
        cout << "Child class show" << endl;
    }
};

int main() {
    
    Parent *c = new Child();
    c->show();
}
