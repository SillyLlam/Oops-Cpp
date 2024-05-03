// begin() and end() function
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    // create a map of strings to integers
    map<string, int> mp;

    // insert some values into the  map
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;

    // get an iterator pointing to the first element in the map
    map<string, int>::iterator it = mp.begin();

    // iterate through the map and print the elements
    while (it != mp.end())
    {
        cout << "Key: " << it->first
             << ", Value: " << it->second << endl;
        ++it;
    }
    return 0;
}