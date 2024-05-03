#include <iostream>
#include <map>
using namespace std;
int main()
{
    // initialize container
    map<int, int> m1, m2;
    m1.insert(pair<int, int>(1, 20));

    // max size of non-empty map
    cout << "The max size of m1 is " << m1.max_size();

    // max size of Empty map
    cout << "\nThe max size of m2 is: " << m2.max_size();
    return 0;
}