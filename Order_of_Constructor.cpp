// For multiple inheritance order of constructor call is, the base class's constructors are called in the order of inheritance and then the derived class's constructor
#include <iostream>
using namespace std;
class Parent1
{
public:
    Parent1()
    {
        cout << "Inside first base class" << endl;
    }
};
class Parent2
{
public:
    Parent2()
    {
        cout << "Inside second base class" << endl;
    }
};
class Child : public Parent2, public Parent1 // CALLING THE SECOND BASE CLASS FIRST
{
public:
    Child()
    {
        cout << "Inside child class" << endl;
    }
};
int main()
{
    // creating object of class Child
    Child obj1;
    return 0;
}