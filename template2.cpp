#include <iostream>
using namespace std;
template <class T, class U>
void multiply(T a, U b)
{
    cout << "Multiplication= " << a * b << endl;
}
int main()
{
    int a = 5, b = 19;
    float x = 2.5, y = 3.3;
    multiply(a, b); // Multiply two integer data type
    multiply(x, y); // Multiply two float data type
    multiply(a, y); // Multiply a float and an integer
    return 0;
}