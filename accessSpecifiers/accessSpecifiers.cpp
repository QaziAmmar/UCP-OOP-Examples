// Access Specifier

#include <iostream>
using namespace std;
 
/*
- Now first of all we are not able to access the private method
- Second if we make pi as public and accidently change, then check the result
 */

class Circle {
    
    private:
        double pi = 3.14;

        double circumferance() {
            return 2 * pi * radius;
        }

    public:
        double radius;

        double area() {
            return pi * radius * radius;
        }

};


int main() {

    Circle ucpCircle;
    ucpCircle.radius = 2;
    cout << ucpCircle.area() << endl;
    
    return 0;
}
