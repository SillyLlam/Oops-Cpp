#include <iostream>
using namespace std;
class Number
{
    int num;

public:
    Number()
    {
        num = 0;
    } // A default constructor is very necessary
    Number(int a)
    {
        num = a;
    }
    Number(Number &obj) // This is a copy constructor
    {
        cout << "Copy Constructor called!!!" << endl;
        num = obj.num;
    }
    //*** Very IMP- When no copy constructor is found then compiler supplies its own copy constructor ***
    void display()
    {
        cout << "The number displayed is: " << num << endl;
    }
};
int main()
{
    Number x, y, z(36), z2;
    x.display();
    y.display();
    z.display();
    Number z1(x); // Copy Constructor invoked
    // z1 should exactly resemble as z or x or y
    z1.display();
    z2 = z; // Copy Constructor not called because the object z is already made, and z2 is just assigned (=) to z
    z2.display();
    Number z3 = x; // Copy Constructor will be invoked because the obj (z3) is made on a different line (different section)
    z3.display();
    return 0;
}