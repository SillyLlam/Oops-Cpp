#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d1{1, 2, 3, 4, 5};
    d1.push_front(6);

    // deque becomes 6, 1, 2, 3, 4, 5

    for (auto it = d1.begin(); it != d1.end(); ++it)
        cout << ' ' << *it;
    return 0;
}