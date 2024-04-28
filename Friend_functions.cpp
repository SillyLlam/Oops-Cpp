// A friend class can access private and protected members of other classes in which it is declared as a friend.
#include <iostream>
using namespace std;
class B;
class A
{
    int x;

public:
    void setdata(int i)
    {
        x = i;
    }
    friend void min(A, B);
};
class B
{
    int y;

public:
    void setdata(int i)
    {
        y = i;
    }
    friend void min(A, B);
};
void min(A a, B b)
{
    if (a.x <= b.y)
        cout << a.x << endl;
    else
        cout << b.y << endl;
}
int main()
{
    A a;
    B b;
    a.setdata(10);
    b.setdata(20);
    min(a, b);
    return 0;
}