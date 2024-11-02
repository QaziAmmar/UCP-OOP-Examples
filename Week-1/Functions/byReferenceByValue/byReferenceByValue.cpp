//
// Author: Qazi Ammar Arshad
// Course: Object-Oriented Programming (UCP)
// Instructor: Qazi Ammar Arshad
// Date: October 10, 2024

#include<iostream>
#include"byReferenceByValue.h"
using namespace std;

int main() {
    
    int num1 = 10;
    int num2 = 20;

    cout << "Sum is " << byValueSum(num1, num2) << endl;
    cout << "value num1 =" << num1 << " " << "value num2 =" << num2 << endl;

    cout << byReferenceSum(num1, num2) << endl;
    cout <<num1 << num2 << endl;

    return 0;
}

int byValueSum(int a, int b) {
    int sum = 0;
    sum = a + b;
    a = 0;
    b = 0;
    return sum;
}

int byReferenceSum(int& a, int& b) {
    int sum = 0;
    sum = a + b;
    a = 0;
    b = 0;
    return sum;
}