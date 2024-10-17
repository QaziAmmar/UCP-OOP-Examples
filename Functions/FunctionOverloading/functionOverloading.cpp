//
// Author: Qazi Ammar Arshad
// Course: Object-Oriented Programming (UCP)
// Instructor: Qazi Ammar Arshad
// Date: October 10, 2024

#include <iostream>
#include <string>


using namespace std;

// Different type of parameters
void sum(int a, int b) {
    cout << "Sum with two integers is called: " << a + b << endl;
}

void sum(double a, double b) {
    cout << "Sum with two doubles is called: " << a + b << endl;
}

// Different number of parameters
void sum(int a, int b, int c) {
    cout << "Sum with three integers is called: " << a + b + c << endl;
}

// Different sequence of parameters
void sum(double a, int b) {
    cout << "Sum with double first and int second is called: " << a + b << endl;
}

void sum(int a, double b) {
    cout << "Sum with int first and double second is called: " << a + b << endl;
}

int main() { 
    // Calling functions with different types of parameters
    sum(5, 10);         // Calls the first function (int, int)
    sum(5.5, 10.2);     // Calls the second function (double, double)

    // Calling functions with different numbers of parameters
    sum(5, 10, 15);     // Calls the third function (int, int, int)

    // Calling functions with different sequences of parameters
    sum(5.5, 10);       // Calls the fourth function (double, int)
    sum(5, 10.5);       // Calls the fifth function (int, double)

    return 0;
}
