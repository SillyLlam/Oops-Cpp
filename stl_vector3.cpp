#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> m2;

    for (int i = 1; i <= 10; i++)
        m2.push_back(i * 10);
    cout << "Output of begin and end: ";
    for (auto i = m2.begin(); i != m2.end(); ++i)
        cout << *i << " ";
    cout << endl;
    cout << "\nReference opetator[g]: m2.[4]= " << m2[4];       //[] this is a reference operator
    cout << endl;
    cout << "\nat(): m2.at(5)= " << m2.at(5);
    cout << endl;
    cout << "\nfront(): m2.front()= " << m2.front();
    cout << endl;
    cout << "\nback(): m2.back()= " << m2.back();
    cout << endl;

    // pointer to first element
    int *pos = m2.data();
    cout << "\nThe first element is: " << *pos;

    return 0;
}