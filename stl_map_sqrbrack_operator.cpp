#include <iostream>
#include <map> //for map operations
using namespace std;
int main()
{
    // declaring map
    map<char, int> mp;

    // using [] to assign key to value
    mp['a'] = 5;
    mp['b'] = 6;
    mp['c'] = 2;

    // printing values
    cout << "The element keys to a is: ";
    cout << mp['a'] << endl;

    cout << "The element keys to b is: ";
    cout << mp['b'] << endl;

    cout << "The element keys to c is: ";
    cout << mp['c'] << endl;

    // default constructor is called
    // prints 0
    cout << "The element keys to d is: ";
    cout << mp['d'] << endl;
    return 0;
}