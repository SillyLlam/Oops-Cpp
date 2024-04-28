// A virtual function (also known as virtual methods) is a member function that is declared within a base class and is re-defined (overridden) by a derived class.
// Virtual functions should be accessed using a pointer or reference of base class type to achieve runtime polymorphism.
#include <iostream>
using namespace std;
class base
{
public:
    virtual void print()
    {
        cout << "Print base class" << endl;
    }
    void show()
    {
        cout << "Show base class" << endl;
    }
};
class derived : public base
{
public:
    void print()
    {
        cout << "Print derived class" << endl;
    }
    void show()
    {
        cout << "Show derived class" << endl;
    }
};
int main()
{
    base *bptr;
    derived d;
    bptr = &d;
    bptr->print();
    bptr->show();
    return 0;
}