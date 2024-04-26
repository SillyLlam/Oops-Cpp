// Properties of Friend Functions
/*
    1. Not in the scope of class
    It is just a declaration and not a function of private section of class

    2. Since it is not in the scope of class, it cannot be called from object that of that class (Example- c1.sumComplex==iNVALID)
    3. Can be invoked without the help of any object
    4. Usually contains the objects as arguments
    5. Can be declared inside public or private section of the class
    6. It cannot access the members directly by their names and need (object_name.member_name) to access any member*/

#include <iostream>
using namespace std;
class Complex
{private:
    int a, b;
    friend Complex sumComplex(Complex o1, Complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // Below line means that non-member- sumComplex function is allowed to do anything with my private parts (members)
    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
// Below line means that non-member- sumComplex function is allowed to do anything with my private parts (members)
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}