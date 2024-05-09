//rbegin() and rend returns reverse iterator
//given a b c d
//returned d c b a
#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
    map<char, int> m1;

    // insert pairs in the multimap
    m1.insert(pair<char, int>('a', 1));
    m1.insert(pair<char, int>('b', 2));
    m1.insert(pair<char, int>('c', 3));
    m1.insert(pair<char, int>('d', 4));

    // show content
    for (auto it = m1.rbegin(); it != m1.rend(); it++)
        cout << it->first << "\t=\t" << it->second << endl;
    return 0;
}