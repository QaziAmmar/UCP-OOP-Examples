#include <iostream>
using namespace std;

// Instructions:
// 1. Define a class named 'Counter' with the following members:
//    - An integer member variable 'count' to store the count value.
// 2. Create a constructor that initializes the 'count' to 0.
// 3. Add a member function 'increment' that increments 'count' by 1 and prints its value.
// 4. Define a function 'increment' (outside of the class) that uses a static local integer variable 'i'.
//    - The static local variable 'i' should be initialized to 0.
//    - In each call to the 'increment' function, 'i' should be incremented by 1 and its current value printed.
// 5. Create a function 'createStaticObject' that demonstrates static objects.
//    - Inside this function, declare a static object of the 'Counter' class named 'c'.
//    - Each time 'createStaticObject' is called, it should increment the static object 'c' using the 'increment' member function.
// 6. In the 'main' function:
//    - Create a 'const' object of the 'Counter' class named 'constCounter'. This will demonstrate that you cannot modify its members.
//    - Call the 'createStaticObject' function multiple times to show that the static object retains its state across function calls.
//    - Call the 'increment' function multiple times to demonstrate the behavior of static local variables.

class Counter {
public:
    int count;  // Non-static member variable to store the count value
    inline static int staticVar = 20;
    const int constVar = 10;

    // Constructor to initialize 'count' to 0
    Counter() : count(0) {}

    // Member function to increment and display 'count'
    void increment() {
        count++;  // Increment the count
        cout << "Count: " << count << endl;
    }
};

// Function to demonstrate the use of a static local variable
void increment() {
    static int i = 0;  // Static local variable, persists across function calls
    i++;  // Increment 'i' each time the function is called
    cout << "Current Value of i = " << i << endl;
}

// Function to create and demonstrate a static object of the 'Counter' class
void createStaticObject() {
    static Counter c;  // Static object of class Counter, retains its state across calls
    c.increment();  // Increment the count of the static object 'c'
}

int main() {

    // Example of a const object
    const Counter constCounter;  // Create a const object of the Counter class
    // constCounter.count = 20;  // Uncommenting this will cause an error as 'count' cannot be modified
    // car read all the values
    cout << constCounter.constVar << endl;
    cout << constCounter.staticVar << endl;
    cout << constCounter.count << endl;


    // Example of a static object
    createStaticObject();  // First call, count = 1
    createStaticObject();  // Second call, count = 2
    createStaticObject();  // Third call, count = 3

    // Example of a static local variable
    increment();  // First call, i = 1
    increment();  // Second call, i = 2
    increment();  // Third call, i = 3

    return 0;
}
