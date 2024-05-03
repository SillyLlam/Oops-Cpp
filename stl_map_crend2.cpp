#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
    // initialize container
    map<int, int> mp;

    // insert elements in random order
    mp.insert(pair<int, int>(1, 20));
    mp[3] = 40;
    mp[2] = 50;
    mp.insert(pair<int, int>(5, 60));
    mp.insert(pair<int, int>(6, 70));
    mp[8] = 30;
    mp.insert(pair<int, int>(9, 80));
    mp.insert(pair<int, int>(7, 90));

    // prints the elements
    cout << "\n The map in reverse order is: \n";
    cout << "KEY\tELEMENT\n";
    for (auto it = mp.crbegin(); it != mp.crend(); ++it)
        cout << it->first << '\t' << it->second << '\n';

    return 0;
}