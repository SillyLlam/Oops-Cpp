#include <iostream>
using namespace std;
class TAX;
class Car
{
public:
    string brand, colour;
    int price(int amount, int tax)
    {
        return (amount + tax);
    }
    void brandname(string brnd)
    {
        brand = brnd;
    }
    void printbrand()
    {
        cout << "The brand name is: " << brand << endl;
    }
    void colouris(string clr)
    {
        colour = clr;
    }
    void printcolour()
    {
        cout << "The colour of " << brand << " is " << colour << endl;
    }
    int sumofTaxes(TAX, TAX);
};
class TAX
{
    int amount, tax;
    friend int Car::sumofTaxes(TAX, TAX);

public:
    void setTaxes(int amt, int gst)
    {
        amount = amt;
        tax = gst;
    }
    void printTaxes(void)
    {
        cout << "The total amount is: " << amount + tax << endl;
    }
};
int Car::sumofTaxes(TAX a1, TAX a2)
{ // Recognition of friend function in the "int main" - without this it wasn't able to recognise
    return (a1.amount + a2.tax);
}
int main()
{
    TAX price;
    price.setTaxes(1000, 320);
    Car Porsche, calc;
    Porsche.brandname("Porsche");
    Porsche.printbrand();
    Porsche.colouris("Black Olive");
    Porsche.printcolour();
    int sum = calc.sumofTaxes(price, price);
    cout << "The amount to be paid is: " << sum << endl;
    return 0;
}