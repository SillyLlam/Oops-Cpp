#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    // assign vector
    vector<int> v;

    // fill the vector  with 10 five times
    v.assign(5, 10); // assigns 10 10 10 10 10 to vector v

    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    // removes last element
    v.pop_back();

    // prints the vector
    cout << "\n The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    // inserts 5 at beginning
    v.insert(v.begin(), 5);
    cout << "\nThe first element is: " << v[0];
    cout << endl;

    sort(v.begin(), v.end());
    cout << "Vector after sorting: ";
    for (auto in = v.begin(); in != v.end(); in++)
        cout << *in << " ";
    cout << endl;

    // printing the vector
    cout << "\nThe vector after inserting 5 at the beginning: ";
    for (auto r = v.begin(); r != v.end(); r++)
        cout << *r << " ";
    cout << endl;

    // removes the first element
    v.erase(v.begin());
    cout << endl;
    cout << "\nThe vector becomes: ";
    for (int i = 0; i <= v.size(); i++)
        cout << v[i] << " ";
    cout << "\nThe first element is: " << v[0];

    // inserts at the beginning
    v.emplace(v.begin(), 5);
    cout << "\nThe first element is: " << v[0];

    // Inserts 20 at the end
    v.emplace_back(20);
    int n = v.size();
    cout << "\nThe last element is: " << v[n - 1];

    v.emplace(v.end(), 30);
    int r = v.size();
    cout << "\nThe last element is: " << v[r - 1];

    cout << "\nThe vector becomes: ";
    for (auto ir = v.begin(); ir != v.end(); ir++)
        cout << *ir << " ";

    // erases the vector
    cout << "\nVector size after clear(): " << v.size();

    // two vector to perfrom swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout << "\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    cout << "\nVector 2: ";
    for (auto ir = v2.begin(); ir != v2.end(); ir++)
        cout << *ir << " ";

    // swap v1 and v2
    cout << "\nAfter swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    cout << endl;

    cout << "\nVector 2: ";
    for (auto it = v2.begin(); it != v2.end(); it++)
        cout << *it << " ";

    return 0;
}