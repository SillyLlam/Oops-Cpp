// the function returns a constant reverse iterator reffering to the last element in the map container
#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
    // initialize container
    map<int, int> mp;

    // insert elements in random order
    mp.insert(pair<int, int>(1, 10));
    mp[2] = 20;
    mp[3] = 30;
    mp.insert(pair<int, int>(4, 40));
    mp.insert(pair<int, int>(5, 50));
    mp[6] = 60;


    auto it = mp.crbegin();
    cout << "The last element is= " << it->first << "," << it->second << "\n";

    // prints the elements
    cout << "\nThe map in reverse order is: \n";
    cout << "KEY\tELEMENT\n";
    for (auto it = mp.crbegin(); it != mp.crend(); ++it)
        cout << it->first << '\t' << it->second << '\n';
    return 0;
}