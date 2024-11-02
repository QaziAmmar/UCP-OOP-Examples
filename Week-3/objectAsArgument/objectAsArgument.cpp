#include <iostream>
using namespace std;

// Class definition
class Rectangle {
public:
    // Member variables to store rectangle dimensions
    int length, width;

    // Parameterized constructor
    /*
        1. Takes two arguments: length and width.
        2. Initializes the object with the provided dimensions.
    */
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Function that takes another object of the same class as an argument
    /*
        1. This method compares the calling object's dimensions with another Rectangle object.
        2. Demonstrates the use of an object as a function argument.
    */
    void compare(Rectangle r) {
        if (length == r.length && width == r.width) {
            cout << "Both rectangles are the same size." << endl;
        } else {
            cout << "Rectangles are of different sizes." << endl;
        }
    }

    // Display rectangle dimensions
    /*
        1. This method prints the length and width of the rectangle.
        2. Helps visualize the dimensions of the object.
    */
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

        // Function that returns an object of the class
    /*
        1. This method returns a new Rectangle object.
        2. It scales the current rectangle's dimensions by the given factor.
        3. Demonstrates how an object can be returned from a method.
    */

   Rectangle scale(int factor) {

        Rectangle scaledRectangle (length * factor, width * factor);
        cout<<"Rectanel has been scalled by factor = " << factor << endl;
        return scaledRectangle;
   }

};

int main() {
    // Creating two Rectangle objects
    /*
        1. r1 and r2 are created with specific length and width using the parameterized constructor.
    */
    Rectangle r1(10, 5);
    Rectangle r2(10, 5);

    // Passing object r2 as an argument to r1's compare method
    /*
        1. Demonstrates passing an object (r2) as an argument to a member function (compare) of another object (r1).
        2. The compare method checks if r1 and r2 are of the same size.
    */
    r1.compare(r2);

     // Scaling the rectangle and returning a new object
    /*
        1. r1.scale(2) returns a new Rectangle object with scaled dimensions.
        2. The new object (r2) is stored and then displayed.
    */
    Rectangle r3 = r1.scale(2);

    r3.display(); // Display the new, scaled rectangle

    return 0;
}
