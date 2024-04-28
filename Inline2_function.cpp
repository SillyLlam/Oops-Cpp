#include <iostream>
using namespace std;
class operation
{
    int a, b, addn, subs;

public:
    void num();
    void add();
    void sub();
};
inline void operation ::num()
{
    cout << "Enter the numbers: " << endl;
    cin >> a >> b;
}
inline void operation ::add()
{
    addn = a + b;
    cout << "The addition of the numbers is: " << addn << endl;
}
inline void operation ::sub()
{
    subs = a - b;
    cout << "The substraction of the numbers is: " << subs << endl;
}
int main()
{
    operation rash;
    rash.num();
    rash.add();
    rash.sub();
    return 0;
}