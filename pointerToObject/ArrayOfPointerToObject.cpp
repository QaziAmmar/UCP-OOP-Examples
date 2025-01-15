

#include <iostream>
using namespace std;

// Define a class named Student

// Instructions:
// 1. Define a class named Student with integer and string data members for ID and name.
// 2. Create a parametrize constructor in the Student class to initialize the ID and name.
// 3. Add a member function named displayInfo to the Student class to display the student's information.
// 4. In the main function, declare a constant integer 'numStudents' and initialize it to 3.
// 5. Declare an array of pointers to Student objects named 'studentArray'.
// 6. Dynamically allocate memory for three Student objects and assign them to the elements of 'studentArray'.
// 7. Call the displayInfo method for each Student object using the pointers in the array.
// 8. Deallocate the memory for each Student object to prevent memory leaks.


class Student {
public:
    int id;          // Member variable to store the student's ID
    string name;     // Member variable to store the student's name

    // Constructor to initialize the Student object
    Student(int id, string name) {
        this->id = id;
        this->name = name;
    }

    // Function to display student information
    void displayInfo() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    const int numStudents = 3; // Number of students
    Student* studentArray[numStudents]; // Array of pointers to Student objects

    // Dynamically create Student objects and assign to array
    studentArray[0] = new Student(1, "Ammar");
    studentArray[1] = new Student(2, "Hassan");
    studentArray[2] = new Student(3, "Ali");

    // Display information for each student
    for (int i = 0; i < numStudents; i++) {
        studentArray[i]->displayInfo(); // Accessing members using the pointer
    }
    // Deallocate memory
    for (int i = 0; i < numStudents; i++) {
        delete studentArray[i]; // Free allocated memory
    }

    return 0; // End of the program
}
