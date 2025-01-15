// C++ program to show the order of constructor calls  
// in Multiple Inheritance 
  
#include <iostream> 
using namespace std; 
  
// First base class 
class Parent1 {    
public: 
    // First base class's constructor     
    Parent1() { 
        cout << "Inside first base class" << endl; 
    } 

    virtual void display() { 
        cout << "Parent1 display function" << endl; 
    }
}; 
  
// Second base class 
class Parent2 { 
public: 
    // Second base class's constructor 
    Parent2() { 
        cout << "Inside second base class" << endl; 
    } 

    virtual void display() { 
        cout << "Parent2 display function" << endl; 
    }
}; 
  
// Child class inherits Parent1 and Parent2 
class Child : public Parent2, public Parent1 { 
public: 
    // Child class's constructor 
    Child() { 
        cout << "Inside child class" << endl; 
    } 
}; 
  
// Main function 
int main() { 
    // Creating an object of class Child 
    Child *obj1 = new Child();
    obj1->Parent1::display();
    // Calling the display function from Parent1 and Parent2
    

    return 0; 
}
