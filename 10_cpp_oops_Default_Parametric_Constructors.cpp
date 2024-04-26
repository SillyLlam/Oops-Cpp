/*Default Constructor: accepts no parameter
Parameterized Constructor: accepts parameters (a1, b1, c1,.....)*/
#include <iostream>
using namespace std;
class Complex
{
   int a, b;

public:
   Complex(int, int); // Constructor declaration
   void printNumber()
   {
      cout << "Your number is " << a << "+" << b << "i" << endl;
   }
};
Complex::Complex(int x, int y) // this is a parameterized constructor as it takes 2 parameters
{
   a = x;
   b = y;
   // cout<<"Hello world"<<endl;
}
int main()
{
   // Implicit call
   Complex a(4, 6);

   // Explicit call
   Complex b = Complex(5, 7);

   a.printNumber();
   b.printNumber();
   return 0;
}