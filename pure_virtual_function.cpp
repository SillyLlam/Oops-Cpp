// A pure virtual function (or abstract function) in C++ is a virtual function for which we can have an implementation, But we must override that function in the derived class, otherwise, the derived class will also become an abstract class.
// A pure virtual function is declared by assigning 0 in the declaration.
#include <iostream>
using namespace std;
class Base
{
    int x;

public:
    virtual void fun() = 0;
    int getX()
    {
        return x;
    }
};
class Derived : public Base //This class inherits from Base and implements fun()
{
    int y;

public:
    void fun()
    {
        cout << "fun() called";
    }
};
int main()
{
    Derived d;
    d.fun();
    return 0;
}