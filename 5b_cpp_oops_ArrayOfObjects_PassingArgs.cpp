#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    { // we can run this because v1 and v2 are public members and we cant access a and b directly because they are private members
        a = v1;
        b = v2;
    }
    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNumber()
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 6);
    c2.printNumber();

    c3.setDataBySum(c1, c2); // o1 ki a ki value aur o2 ki a ki value and o1 ki b ki value aur o2 ki b ki value
    c3.printNumber();
    return 0;
}