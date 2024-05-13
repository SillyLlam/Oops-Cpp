#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_front(5);
    dq.push_front(4);
    dq.push_front(3);
    dq.push_front(2);
    dq.push_front(1);

    // deque bacomes 1, 2, 3, 4, 5

    dq.pop_back();
    // deque becomes 1, 2, 3, 4

    for (auto it = dq.begin(); it != dq.end(); ++it)
        cout << ' ' << *it;
    return 0;
}