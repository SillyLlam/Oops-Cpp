/*Constructors-> It is a special member function with same name as of the class.
                 It is automatically invoked.
                 It is used to "initialize" the objects of its class.
                 In simple words, it is a function.
                 It is *automatically* invoked whenever an "object is created".
                 (Invoke means call karna (or) execute karna)
                 *** Constructor does not have a return type *** */
#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // creating a constructor
    Complex(void); // Constructor declaration
    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
Complex::Complex(void) // This is a default constructor as it takes no parameters
{
    cout << "Hello world!" << endl;
    a = 10;
    b = 20;
}
int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}

// ERRORS IN CONSTRUCTOR
/*code continuation:
.
.
public:
Complex(void);
.
.
.
.
Complex::Complex(void){
    a=10;
    b=20;
}
.
.(if not called since constructor does not have a return type)
.
ERROR OUTPUT
Your number is 230203402 + 234143124i (Garbage value)*/

// WARNING* no return statement in function returning non-void-
/*
Why because constructor function has no return type
But member function has return type hence the above error shows garbage value
*/
/*
Constructor Properties=
1. Default Constructor= Constructor that does not accepts any parameters

Properties
1. It should be declared in the public section of the class
2. They are automatically invoked wherever the object is created
3. They cannot return values and do not have a return type
4. It can have default arguments
5. We cannot refer to their address*/