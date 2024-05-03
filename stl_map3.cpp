// CPP progran to demonstrate the implementation in Map
#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
    // empty map container
    map<int, int> g1;

    // insert elements in random order
    g1.insert(pair<int, int>(1, 40));
    g1.insert(pair<int, int>(2, 30));
    g1.insert(pair<int, int>(3, 20));
    g1.insert(pair<int, int>(4, 10));
    g1.insert(pair<int, int>(5, 20));
    g1.insert(pair<int, int>(8, 50));

    // another way of inserting value in map

    g1[7] = 10;
    g1[8] = 30;
    g1[9] = 40;

    // printing map g1
    map<int, int>::iterator itr;
    cout << "\nThe map g1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = g1.begin(); itr != g1.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;

    // assigning the elemenents from g1 to g2
    map<int, int> g2(g1.begin(), g1.end());

    // print all elements of the map g2
    cout << "\nThe map g2 after"
         << " assign from g1 is: \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = g2.begin(); itr != g2.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;

    // remove all elements up to
    // element with key=3 in g2
    cout << "\ng2 after removal of"
            "elements less than key=3: \n";
    cout << "\tKEY\tELEMENT\n";
    g2.erase(g2.begin(), g2.find(3));
    for (itr = g2.begin(); itr != g2.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }
    cout << endl;
    // lower bound and upper bound for map g1 key=5

    cout << "g1.lower_bound(5): "
         << "\tKEY= ";
    cout << g1.lower_bound(5)->first << '\t';
    cout << "\tElement= " << g1.lower_bound(5)->second << endl;
    cout << "g1.upper_bount(5) : "
         << "\tKEY= ";
    cout << g1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT= " << g1.upper_bound(5)->second << endl;
    return 0;
}