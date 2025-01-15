#include <iostream>
using namespace std;

template <typename T, typename  D> T sum(T a, D b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << sum(5, 11.9) << endl;        // Works for int
    return 0;
}
