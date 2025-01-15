#include <iostream>
using namespace std;

class Person
{
private:
    int age;

public:
    Person(int a) : age(a) {}

    // Declare Display as a friend class
    friend class Display;
    friend void showAge(Person);
};

// Friend Class
class Display
{
public:
    void showAge(Person &p)
    {
        cout << "Age: " << p.age << endl;
    }
};

// Friend function
void showAge(Person p)
    {
        cout << "Age: " << p.age << endl;
    }

int main()
{
    Person zain(20);
    Display display;
    display.showAge(zain);

    return 0;
}
