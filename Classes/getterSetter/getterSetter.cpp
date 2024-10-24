// Access Specifier

#include <iostream>
using namespace std;
 
/*
    - Methods that are use to acces the value of private data Member/ var of fucntions. 
 */

//  for this operator

class Person {

    private:
        string id;

    public:
    void setId(string id) {

        this->id = "MSCS180" + id;
    }

    string getID() {
        // 
        return this->id;
    }

};


int main() {

    // this operator example

    Person ammar;

    ammar.setId("31");

    cout << ammar.getID() << endl;

    return 0;
}
