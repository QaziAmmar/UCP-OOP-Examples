#include <iostream>
using namespace std;

class MyClass
{
private:
public:
    int *data;
    // Constructor
    MyClass(int value) : data(new int(value)) {}

    // Copy Constructor
    MyClass(const MyClass &other)
    {
        this->data = new int(*other.data);
        cout << "Copy Constructor called." << endl;
    }

    // Assignment Operator
    MyClass& operator=(const MyClass &other)
    {
        cout << "Assignment Operator called." << endl;
        // if (this == &other) // Handle self-assignment
        //     return *this;

        // delete data;                 // Free existing memory
        // data = new int(*other.data); // Allocate new memory and copy value
        // return *this;

        cout << *data <<endl; 
        delete data; // for the purpos of memeor clearn
        this->data = new int(*other.data);
        return *this;
    }

    // Display function
    void display() const { cout << "Data: " << *data << endl; }
};

int main()
{
    MyClass obj1(10);    // Constructor
    MyClass obj2 = obj1; // Copy Constructor
    MyClass obj3(20);
    
    obj3 = obj1; // Assignment Operator
    // *obj3.data = 30;

    obj3.display();
    obj1.display();

    return 0;
}
