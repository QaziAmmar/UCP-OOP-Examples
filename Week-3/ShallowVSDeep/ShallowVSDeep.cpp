#include <iostream>
using namespace std;
// Define a class named Book

// Instructions:
// 1. Define a class named Book with an integer data member 'id' and a pointer data member 'price'.
// 2. Implement a default constructor that initializes 'id' to 0 and dynamically allocates memory for 'price', initializing it to 0.
// 3. (Optional) Implement a shallow copy constructor that copies 'id' and the pointer to 'price' from another Book object.
// 4. (Optional) Implement a deep copy constructor that allocates new memory for 'price' and copies the value from another Book object.
// 5. In the main function, create an instance of the Book class named 'opp' to test the default constructor.
// 6. Create another instance of the Book class named 'math', passing 'opp' to demonstrate shallow copy (if shallow copy constructor is implemented).
// 7. Output the initial values of 'opp' and 'math' to show that they share the same price pointer (shallow copy).
// 8. Modify the 'id' and 'price' of 'opp'.
// 9. Output the updated values of 'opp' and 'math' to illustrate the effects of shallow copying.

class Book {

public:
    int id;       // An integer variable to store the book ID
    int *price;   // A pointer to an integer to store the book price (dynamically allocated)

    // Default constructor
    /*
       Initializes the book ID to 0 and dynamically allocates memory for price, 
       setting the price to 0. 
    */
    Book() {
        id = 0;
        price = new int(0);  // Allocate memory for price and set it to 0
    }

    // Default shallow copy constructor (commented out)
    /*
       Copies the ID and the pointer to the price from the original object.
       This creates a shallow copy, meaning both objects share the same price pointer.
       Uncommenting this constructor would demonstrate shallow copying behavior.
    */
    // Book(const Book& book) {
    //     this->id = book.id;
    //     this->price = book.price;  // Both objects point to the same memory location for price
    // }

    // Deep copy constructor (commented out)
    /*
       Copies the ID and allocates new memory for price in the new object, 
       then copies the value stored at the original object's price pointer.
       This creates a deep copy, meaning each object has its own price pointer.
    */
    // Book(const Book &book) {
    //     this->id = book.id;       // Copy the ID
    //     this->price = new int;     // Allocate new memory for price
    //     *this->price = *(book.price);  // Copy the value of price from the original object
    // }
};

int main() {

    // Create an instance of Book named opp (default constructor)
    /*
       opp is initialized with id = 0 and price = 0 using the default constructor.
    */
    Book opp;

    // Create another Book instance named math using opp (default copy constructor)
    /*
       math is created as a shallow copy of opp (since the deep copy constructor is commented out).
       Both opp and math share the same memory address for the price pointer.
    */
    Book math(opp);

    // Print initial values of opp and math objects
    /*
       Before making any changes, display the id and price of both opp and math objects.
       Expected: both objects have the same id and price (id = 0, price = 0).
    */
    cout << "Values of book before changing" << endl;
    cout << "value of opp.id = " << opp.id << endl;
    cout << "value of opp.price = " << *(opp.price) << endl;

    cout << "value of math.id = " << math.id << endl;
    cout << "value of math.price = " << *(math.price) << endl;

    // Modify the values of the opp object
    /*
       Change the id of opp to 1 and the price to 10.
       Since opp and math share the same memory location for price (shallow copy),
       this will affect the math object's price as well.
    */
    opp.id = 1;
    *(opp.price) = 10;

    // Print updated values of opp and math objects after modifying opp
    /*
       After changing opp, the id of opp should be 1 and the price should be 10.
       However, since math shares the same memory address for price, its price will also change to 10.
       Expected: math.id remains 0, but math.price becomes 10 due to shallow copy behavior.
    */
    cout << "Values of book after changing" << endl;
    cout << "value of opp.id = " << opp.id << endl;  // Should print 1
    cout << "value of opp.price = " << *(opp.price) << endl;  // Should print 10

    cout << "value of math.id = " << math.id << endl;  // Should print 0
    cout << "value of math.price = " << *(math.price) << endl;  // Should print 10 (unexpected due to shallow copy)

    return 0;
}
