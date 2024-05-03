#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<char, int> m1 = {
        {'a', 1},
        {'b', 2},
        {'c', 3},
        {'d', 4},
    }; 

    cout << "Map contains following elements"
         << " in reverse order " << endl;

    for (auto i = m1.rbegin(); i != m1.rend(); ++i)
        cout << i->first << " = " << i->second << endl;
    return 0;
}