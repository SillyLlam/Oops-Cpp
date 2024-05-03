#include <iostream>
#include <map> // for map operations
using namespace std;
int main()
{
    // declaring map of char abd int
    map<char, int> mp;

    // declaring iterators
    map<char, int>::iterator it;
    map<char, int>::iterator it1;
    map<char, int>::iterator it2;

    // declaring pair for return value of map containing map iterator and bool
    pair<map<char, int>::iterator, bool> ptr;

    // using insert() to insert single pair
    // inserting 'a' with 20
    ptr = mp.insert(pair<char, int>('a', 20));

    // checking if the key was already present or newly inserted
    if (ptr.second)
        cout << "The key was newly inserted";
    else
        cout << "The key was already present";
    cout << endl;

    // printing map pairs after insertion
    cout << "The map pairs after 1st insertion are: \n";
    for (it1 = mp.begin(); it1 != mp.end(); ++it1)
        cout << it1->first << "->" << it1->second << endl;

    it = mp.begin();

    // inserting map pair using hint
    mp.insert(it, pair<char, int>('b', 24));
    cout << endl;

    // printing map pairs after insertion
    cout << "The map pairs after 2nd insertion are: \n";

    for (it1 = mp.begin(); it1 != mp.end(); ++it1)
        cout << it1->first << "->" << it1->second << endl;

    // initializing another map

    map<char, int> mp2;

    // using insert(beg_iter, end_iter)to copy all elements
    mp.insert(mp.begin(), mp.end());
    cout << endl;

    // printing new map pairs after insertion
    cout << "The new map pairs after insertion are: \n";

    for (it1 = mp2.begin(); it1 != mp2.end(); ++it1)
        cout << it1->first << "->" << it1->second << endl;

    return 0;
}