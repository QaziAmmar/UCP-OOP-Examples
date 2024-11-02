#include <iostream>
using namespace std;


// Instructions:
// 1. Define a class named Book with a pointer data member to store the price of the book.
// 2. In the main function, declare an integer variable 'num' and initialize it to 10.
// 3. Declare a pointer to an integer named 'price'.
// 4. Dynamically allocate memory for 'price' and assign it the value of 10.
// 5. Optionally, make 'price' point to the address of 'num'.
// 6. Output the value pointed to by 'price'.

// 7. Create an instance of the Book class named 'opp'.
// 8. Dynamically allocate memory for 'opp.price' and assign it the value of 50.
// 9. Optionally, make 'opp.price' point to the address of 'num'.
// 10. Output the value pointed to by 'opp.price'.

// Define a class named Book
class Book {
public:
    int *price;  // Pointer to an integer to store the price of the book
};

int main() {
    // Demonstrating how to assign a value to a pointer, either through a class member or a direct variable

    int num = 10;       // Declare an integer variable num and initialize it to 10
    int *price;        // Declare a pointer to an integer

    // Dynamically allocate memory for price and assign it the value of 10
    price = new int(10);
    // Alternatively, you can make price point to the address of num
    // price = &num;
    
    // Output the value pointed to by price (should be 10)
    cout << *price << endl;  // Dereference the pointer to get the value it points to

    // Create an instance of Book
    Book opp;  
    // Dynamically allocate memory for opp.price and assign it the value of 50
    opp.price = new int(50);
    // Alternatively, you can make opp.price point to the address of num
    // opp.price = &num;

    // Output the value pointed to by opp.price (should be 50)
    cout << *opp.price << endl; // Dereference the pointer to get the value it points to

    return 0; // End of the program
}
