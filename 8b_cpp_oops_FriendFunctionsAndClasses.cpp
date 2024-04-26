#include <iostream>
using namespace std;
// Exchanging values inside class objects to another object in another class
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &); // declaration of function
public:
    void setdata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 &, c2 &); // declaration of function
public:
    void setdata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};
void exchange(c1 &x, c2 &y)
{ // Making function outside classes to exchange the values (inter-class)
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    c1 lmao;
    c2 lol;

    lmao.setdata(24);
    cout << "The value of c1 before exchange: ";
    lmao.display();
    cout << endl;
    lol.setdata(56);
    cout << "The value of c2 before exchange: ";
    lol.display();
    cout << endl;
    exchange(lmao, lol); // calling friend function
    cout << "The value of c1 after exchanging is: ";
    lmao.display();
    cout << endl;
    cout << "The value of c2 after exchange is: ";
    lol.display();
    return 0;
}