#include <iostream>
using namespace std;
class Base
{
    int data1; // Private by default and is not inherited
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
// privately derived
/*1. data2 will be private
2. setData will be private
3. getData1 will be private
4. getData2 will be private*/
void Base ::setData(void) // since setData does not take anything so (void) is to be written
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}
class Derived : public Base
{
    int data3; // This will be private as no access specifier is given
public:
    void process();
    void display();
};
void Derived ::process()
{
    data3 = data2 * getData1(); // getData1 because (data1) is a private member (inaccessessible in inheritance) of Base class but getData1 is accessessible
}
void Derived ::display()
{
    cout << "The value of Data 1 is: " << getData1() << endl; // getData1 because (data1) is a private member
    cout << "The value of Data 2 is: " << data2 << endl;
    cout << "The value of Data 3 is: " << data3 << endl;
}
int main()
{
    Derived obj; //Derived class can be done because setData function is public 
    // private visibility mode
    /*
    1. setData will not be able to call
    2. process and display can be called
    */
    obj.setData();
    obj.process();
    obj.display();
    return 0;
}