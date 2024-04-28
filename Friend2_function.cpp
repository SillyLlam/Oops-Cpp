#include <iostream>
using namespace std;
class Y;
class X
{
    int a;

public:
    void setdata(int i)
    {
        a = i;
    }
    void getdata()
    {
        cout << "Enter value of a: " << endl;
        cin >> a;
    }
    void friend max(X, Y);
};
class Y
{
    int b;

public:
    void setdata()
    {
        b = 10;
    }
    void friend max(X, Y);
};
void max(X ob1, Y ob2)
{
    if (ob1.a <= ob2.b)
    {
        cout << "The greater num is: " << ob2.b << endl;
    }
    else
    {
        cout << "The greater num is: " << ob1.a << endl;
    }
}
int main()
{
    X Rash;
    Y Radha;
    Rash.getdata();
    Radha.setdata();
    max(Rash, Radha);

    return 0;
}