#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// Create 2 classes:
/*
1. Simple Calculator - Takes Input of 2 numbers using a utility function and performs +, -, *, / and displays the  results using another function.
2. Scientific Calculator - Takes input of 2 numbers using utility function ad performs any four scientific operator of your choice and displays the  results using another function.

Create another class Hybrid Calculator and inherit it using these 2 classes
Q.1 What type of inheritance are you using?
Q.2 Which mode of inheritance are you using?
Q.3 Create an object of Hybrid Calculator and display results of simple and scientific calculator.
Q.4 How is code reusability implemented?
*/
class Simple
{
protected:
    int num1, num2;
    int sum, diff, prod;
    float div;

public:
    void setNum1(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void calc1(void)
    {
        sum = num1 + num2;
        diff = num1 - num2;
        prod = num1 * num2;
        div = (float)num1 / num2;
    }
    void display1(void)
    {
        cout << "Sum= " << num1 << "+" << num2 << "=" << sum << endl;
        cout << "Difference= " << num1 << "-" << num2 << "=" << diff << endl;
        cout << "Multiplication= " << num1 << "*" << num2 << "=" << prod << endl;
        cout << "Division= " << num1 << "/" << num2 << "=" << setprecision(2) << div << endl;
    }
};
class Scientific
{
protected:
    int num3, num4;
    float sqr3, sqr4;
    float cube3, cube4;
    float sqrt3, sqrt4;
    float cubrt3, cubrt4;

public:
    void setNum2(int a, int b)
    {
        num3 = a;
        num4 = b;
    }
    void calc2(void)
    {
        sqr3 = num3 * num3;
        sqr4 = num4 * num4;
        cube3 = num3 * num3 * num3;
        cube4 = num4 * num4 * num4;
        sqrt3 = sqrt(num3);
        sqrt4 = sqrt(num4);
        cubrt3 = cbrt(num3);
        cubrt4 = cbrt(num4);
    }
    void display2(void)
    {
        cout << "Square of " << num3 << " : " << sqr3 << endl;
        cout << "Square of " << num4 << " : " << sqr4 << endl;
        cout << "Cube of " << num3 << " : " << cube3 << endl;
        cout << "Cube of " << num4 << " : " << cube4 << endl;
        cout << "Square Root of " << num3 << " : " << setprecision(2) << sqrt3 << endl;
        cout << "Square Root of " << num4 << " : " << setprecision(2) << sqrt4 << endl;
        cout << "Cube Root of " << num3 << " : " << setprecision(2) << cubrt3 << endl;
        cout << "Cube Root of " << num4 << " : " << setprecision(2) << cubrt4 << endl;
    }
};
class Hybrid : public Simple, public Scientific
{
public:
    void set(int a, int b)
    {
        setNum1(a, b);
        setNum2(a, b);
    }
    void calc(void)
    {
        calc1();
        calc2();
    }
    void display(void)
    {
        display1();
        display2();
    }
};
int main()
{
    int a, b;
    cout << "Enter the first Number: ";
    cin >> a;
    cout << "Enter the second Number: ";
    cin >> b;

    Hybrid Porsche;
    Porsche.set(a, b);
    Porsche.calc();
    Porsche.display();
    return 0;
}