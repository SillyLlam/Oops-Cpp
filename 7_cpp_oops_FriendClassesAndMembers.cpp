#include <iostream>
using namespace std;

// Forward Declaration of class to be defined afterwards
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumImgComplex(Complex, Complex);
};
class Complex
{
    int a, b;
    friend int Calculator::sumRealComplex(Complex, Complex);
    friend int Calculator::sumImgComplex(Complex, Complex);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumImgComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    int resnum = calc.sumImgComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    cout << "The sum of imaginary part of o1 and o2 is " << resnum << endl;
    return 0;
}