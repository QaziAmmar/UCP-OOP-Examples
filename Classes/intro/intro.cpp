#include <iostream>
using namespace std;

class User
{

  public:
    string name;

    private:
    string pointer;

    public:
    int age;

    void showInfo() {
        cout << "name:" << name << " age = " << age;
    }
};


int main()
{
   

// what we will do take the common attribute and put them into a class simple.
    // code with Class
    User ammar;
    ammar.name = "Qazi Ammar arshad";
    ammar.age = 30;
    ammar.showInfo();

    User tabish;
    tabish.name = "Tabish";
    tabish.age = 31;
    tabish.showInfo();

}