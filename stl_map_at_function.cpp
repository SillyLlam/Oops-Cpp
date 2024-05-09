#include <iostream>
#include <map>
using namespace std;
int main()
{
    // take two maps
    map<int, char> m1;
    map<char, int> m2;

    m1.insert(pair<int, char>(1, 'a'));
    m1.insert(pair<int, char>(2, 'b'));
    m1.insert(pair<int, char>(3, 'c'));
    m1[4] = 'd';

    m2.insert(pair<char, int>('x', 1));
    m2['y'] = 2;
    m2['z'] = 3;

    // print the associated class
    cout << "Element at m1[2] = " << m1.at(2) << endl;

    cout << "Element at m2['y'] = " << m2.at('y') << endl;
    return 0;
}