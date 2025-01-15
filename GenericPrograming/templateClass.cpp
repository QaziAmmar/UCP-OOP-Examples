#include <iostream>
using namespace std;

// Class template with a default type argument
template <typename T = int>
class Box {
private:
    T value;

public:
    Box(T val) : value(val) {}
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Box<> intBox(42);         // Defaults to int
    Box<double> doubleBox(3.14); // Explicitly specified as double

    intBox.display();
    doubleBox.display();

    return 0;
}
