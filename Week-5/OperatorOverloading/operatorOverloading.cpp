#include <iostream>
using namespace std;

// Arithmetic Operator
class Vector
{
private:
    int x, y;

public:
    // Constructor to initialize vector
    Vector(int xVal, int yVal) : x(xVal), y(yVal) {}

    // Overload the + operator for vector addition
    Vector operator+(const Vector &obj1)
    {
        return Vector(this->x + obj1.x, this->y + obj1.y);
    }

    friend Vector operator+(int xy, const Vector &obj1)
    {
        return Vector(xy + obj1.x, xy + obj1.y);
    }
    // Relational Operator: Overload the > operator
    bool operator>(const Vector &obj1)
    {
        // Define the relation based on the sum of the components
        return (this->x + this->y) > (obj1.x + obj1.y);
    }


    // Unary Operator: Overload the ++ operator (prefix)
    Vector& operator++()
    {
        // Increment both x and y by 1
        this->x++;
        this->y++;
        return *this; // Return the current object
    }

    // Stream Insertion Operator (overloads << for output)
    friend ostream &operator<<(ostream &out, const Vector &v)
    {
        out << "Vector(x: " << v.x << ", y: " << v.y << ")";
        return out;
    }

    // Stream Extraction Operator (overloads >> for input)
    friend istream &operator>>(istream &in, Vector &v)
    {
        cout << "Enter x: ";
        in >> v.x;
        cout << "Enter y: ";
        in >> v.y;
        return in;
    }

    // Display function for alternative output format
    void display() const
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    void operator<<(Complex &obj)
    {
        cout << obj.real;
        cout << "+i" << obj.imag << endl;
        
    }

    friend istream &operator>>(istream &in, Complex &c)
    {
        cout << "Enter Real Part ";
        in >> c.real;
        cout << "Enter Imaginary Part ";
        in >> c.imag;
        return in;
    }
};

int main()
{
    // this will not work.
    // Complex c1;
    // cout << c1;


    Vector v1(2, 3); // Create first vector (2, 3)
    Vector v2(4, 5); // Create second vector (4, 5)

    // Use overloaded + operator
    Vector v3 = v1 + v2;
    // important example
    Vector v4 = 10 + v2;

    cout << "Result of v1 + v2 = ";
    v4.display(); // Display the result

    // Using overloaded > operator
    if (v1 > v2)
    {
        cout << "v1 is greater than v2" << endl;
    }
    else
    {
        cout << "v1 is not greater than v2" << endl;
    }

    // Using overloaded ++ operator
    ++v1; // Increment v1
    
    cout << "After incrementing v1: ";
    v1.display(); // Display the incremented vector

    // Demonstrate << and >> operators
    cout << "Current state of v2: " << v2 << endl;

    // Read new values for v2 using >> operator
    cout << "Enter new values for v2:" << endl;
    cin >> v2;
    cout << "Updated state of v2: " << v2 << endl;

    return 0;
}
