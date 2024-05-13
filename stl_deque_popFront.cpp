#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> m1;
    m1.push_front(45);
    m1.push_front(44);
    m1.push_front(23);

    // deque becomes 23, 44, 45

    m1.pop_front();
    // deque becomes 44, 45

    for (auto it = m1.begin(); it != m1.end(); ++it)
        cout << ' ' << *it;
    return 0;
}