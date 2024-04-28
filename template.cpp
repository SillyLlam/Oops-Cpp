#include <iostream>
using namespace std;
// Template function to add two numbers
template <typename T>
T add(T num1, T num2)
{
    return (num1 + num2);
}
int main()
{
    int result1;
    double result2;
    // Calling with int parameters
    result1 = add<int>(2, 3);
    cout << result1 << endl;
    result2 = add<double>(3.4, 4);
    cout << result2 << endl;
    return 0;
}