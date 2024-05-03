#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    // create a map of strings to integers
    map<string, int> map;

    // insert some values into the map
    map["one"] = 1;
    map["two"] = 2;
    map["three"] = 3;

    // print the size of the map
    cout << "Size of map: " << map.size() << endl;
    return 0;
}