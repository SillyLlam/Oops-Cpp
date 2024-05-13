//**Work on this**

#include <iostream>
using namespace std;
class Complex
{
    int a, b, c;

public:
    // Complex()
    // {
    //     a = 0;
    //     b = 0;
    // }
    Complex(int x=6, int y=7)
    {
        a = x;
        b = y;
    }
    // Complex(int x)
    // {
    //     a = x;
    //     b = 0;
    // }
    
    void printNumber()
    {
        cout << "Your number is: " << a << " + " << b << "i"
             <<endl;
    }
};
int main()
{
    Complex a1;
    a1.printNumber();

    Complex a2(3, 7);
    a2.printNumber();

    Complex a3(4,6);
    a3.printNumber();
    return 0;
}