
#include <iostream>
using namespace std;

// Instructions:
// 1. Define a class named Car with string and integer data members for model and year.
// 2. Create a parametrize constructor in the Car class to initialize the model and year.
// 3. In the main function, create an object of the Car class named 'myCar' and initialize it with a model and year.
// 4. Create a pointer to the Car object named 'carPtr' and assign it the address of 'myCar'.
// 4.1 show both way to assign value to carPtr with dynamic memory allocation and with Address operator.
// 5. Access and output the members of the Car object using the pointer 'carPtr' with the -> operator.


// Define a class named Car
class Car {
public:
    string model;
    int year;

    // Constructor
    Car(string m, int y) : model(m), year(y) {}
};

int main() {
    // Step 1: Create an object of Car
    Car myCar("Toyota", 2020);

    // Step 2: Create a pointer to the Car object
    Car *carPtr = &myCar;

    // Step 3: Access members of the Car object using the pointer
    cout << "Car Model: " << carPtr->model << endl; // Use -> operator
    cout << "Car Year: " << carPtr->year << endl;

    return 0;
}