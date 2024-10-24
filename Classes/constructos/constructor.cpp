#include <iostream>
using namespace std;

// Constructor
    /*
        1. Just show cout message, no variable assignment
        2. initilize the values to default with no aurgumant.
        3. Make a parametrize constructor and perform function overloading 3 func.
        4. Empty copy construct to show when the assignment take place it works,
        then perfrom copy operation in revers order.
        5. show how destructor works

    */

class Car
{
public:

    string model;
    int year;

    //    Car() {
    //     cout <<"Call default constructor";
    //    }

    Car()
    {
        model = "honda";
        year = 2024;
        cout << "This is a constructor that will assing defautl values" <<endl;
    }

    // Parameterized Constructor

    Car(string model)
    {
        this->year = 2024;
        this->model = model;
    }

    Car(int year, string model)
    {
        this->year = year;
        this->model = model;
    }

    // Copy Constructor
    Car(Car const &obj)
    {
        cout << "Default copy constructor is called" <<endl ;

    }

    // Destructor
    /*
        1. This is the destructor.
        2. It is called automatically when an object goes out of scope or is deleted.
        3. Destructors are used to free resources or perform cleanup tasks.
    */

   void displyValue() {
    cout <<"Year of the car is" << this->year;
    cout <<"Model of the car is" << this->model;
   }
};

int main()
{

    // Default Constructor
    // Car honda;
    // cout << honda.model << endl;
    // cout << honda.year << endl;

    // Parameterized Constructor

    // Copy Constructor
    Car toyota;
    cout << "Just going to call the default copy constructor" <<endl ;
    Car waqasCar = toyota;
    cout << "default copy constructor done" <<endl ;

    // Destructor


    return 0;
}
