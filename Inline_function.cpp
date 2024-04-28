// When the inline function is called whole code of the inline function gets inserted or substituted at the point of the inline function call.
// This substitution is performed by the C++ compiler at compile time.
// An inline function may increase efficiency if it is small.
#include <iostream>
using namespace std;
class operation
{
    int a, b, add;

public:
    void get();
    void sum();
};
inline void operation::get()
{
    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter second value: ";
    cin >> b;
}
inline void operation ::sum()
{
    add = a + b;
    cout << "Addition of two numbers: " << add << endl;
}
int main()
{
    cout << "Program using inline function: " << endl;
    operation s;
    s.get();
    s.sum();
    return 0;
}