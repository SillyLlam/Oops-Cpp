#include <iostream>
using namespace std;
// Abstract class
class Shape
{
protected:
    float dimension;

public:
    void getDimension()
    {
        cin >> dimension;
    }
    // pure virtual function
    virtual void calculateArea() = 0;
};
// Derived class
class Square : public Shape
{
public:
    void calculateArea()
    {
        cout << dimension * dimension << endl;
    }
};
// Derived class
class Circle : public Shape
{
public:
    void calculateArea()
    {
        cout << 3.14 * dimension * dimension << endl;
    }
};
int main()
{
    Square square;
    Circle circle;
    cout << "Enter the length of the square:" << endl;
    square.getDimension();
    cout << "Area of square: " << endl;
    square.calculateArea();
    cout << "Enter radius of the circle" << endl;
    circle.getDimension();
    cout << "Area of circle:" << endl;
    circle.calculateArea();

    return 0;
}