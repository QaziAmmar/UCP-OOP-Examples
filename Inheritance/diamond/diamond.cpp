#include <iostream>
using namespace std;

class A {
public:
  int a;
  // A() { std::cout << "A constructed\n"; }
  A(int a) { 
    this->a = a;
    std::cout << "A constructed with int value is called\n"; }
};

class B: virtual public A {
public:
  B() : A(10) { std::cout << "B constructed\n"; }
};

class C: virtual public A {
public:
  C() : A(20) { std::cout << "C constructed\n"; }
};

class D : public B, public C {
public:
  D(): A(10) { std::cout << "D constructed\n"; }
};

int main() {
  D obj; // Output: A constructed, B constructed, C constructed, D constructed
}