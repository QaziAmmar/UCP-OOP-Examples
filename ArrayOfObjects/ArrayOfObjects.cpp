
#include <iostream>
#include <string>
using namespace std;

// Class definition for Student
class Student {
private:
    string name;
    int rollNumber;

public:
    
    /*
    Code Guidline
        1. make a default constructor with Unknow values
        2. write a cout line that will show that constructor is called
        3. Make parametrize construcotr.
        4. write a disply value function.
    */
    Student() {
        name = "Unknown";
        rollNumber = 0;
        cout << "Default constructor is called." << endl;
    }

    Student(string n, int roll) {
        name = n;
        rollNumber = roll;
    }

    void displayStudent() const {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};

int main() {

    // --- For Student Class Example ---

    Student students[3];  

     // Displaying the array of default-constructed students
    cout << "Default-constructed students:" << endl;
    for (int i = 0; i < 3; i++) {
        students[i].displayStudent();  // Output: Name: Unknown, Roll Number: 0
    }

    // Creating an array of Student objects with the parameterized constructor
    Student ucpStudents[] = {
        Student("Hamza", 101),
        Student("Waqar", 102),
        Student("Ali", 103)
    };
   
    // Displaying the array of parameterized-constructed students
    cout << "Parameterized-constructed students:" << endl;
    for (int i = 0; i < 3; i++) {
        ucpStudents[i].displayStudent();
    }

    return 0;
}