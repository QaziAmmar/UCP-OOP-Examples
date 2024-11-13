#include <iostream>
using namespace std;

// Instructions:
// 1. Define a class named Student with the following members:
//    - A static integer member `objectCount` to track the total number of Student objects created.
//    - A regular integer member `id` to store each student's unique ID.
// 2. The static member `objectCount` should be initialized inside the class (using C++17 syntax).
// 3. In the constructor of the class, increment the `objectCount` whenever a new object is created.
// 4. Create a member function `displyShow` that prints the current count of Student objects.
// 5. In the main function, create three Student objects: `s1`, `s2`, and `s3`.
// 6. Access the static variable `objectCount` directly through the class name to display the current count of Student objects.
// 7. Use one of the object instances (`s1`) to call the `displyShow` function to demonstrate how an object can access the static member.
// 8. Modify the static variable `objectCount` using the class name and display the updated count.

// Static Member Function:
// 9. Create a static function `databaseConenctionHealth` to simulate a database connection check.
//    - Note: This function should not access non-static members like `id`.
// 10. Call the static function `databaseConenctionHealth` to simulate a database connection health check.
// 11. Create another member function `reset` that resets the static member `objectCount` to 0.
// 12. Use one of the object instances to call the `reset` function, which resets the static member `objectCount` to 0.
// 13. Finally, display the reset value of the static member `objectCount`.


class Student {
public:
    // Declaration and initialization of a static variable inside the class (C++17 and later)
    inline static int objectCount = 0;
    int id =0;  

    // Constructor that increments the static variable
    Student() {
        objectCount++;
    }

       // Function to reset the value of the static variable
    void reset() {
        objectCount = 0;
    }

    // Function to display the value of the static variable
    void displyShow() {
        id = 20;
        cout << "Number of Student objects: " << objectCount << endl;
    }

     static void displyObjectCount() {
        cout << "Number of Student objects: " << objectCount << endl;
    }   
};

int main() {
    // Create three Student objects
    Student s1, s2, s3;

    // Accessing the static variable directly using the class name
    cout << "Number of Student objects: " << Student::objectCount << endl;

    // Accessing static variable through an object
    s1.displyShow();  
    

    // Modify the static variable value using the class name
    Student::objectCount = 20;
    s1.objectCount = 30;
    cout << "Number of Student objects after modification: " << Student::objectCount << endl;

    // database connection stable 
    Student::displyObjectCount();

    // Reset the static variable using an object function
    s2.reset();
    cout << "Number of Student objects after reset: " << Student::objectCount << endl;

    return 0;
}
