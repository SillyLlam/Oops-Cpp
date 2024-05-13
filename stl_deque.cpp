#include <iostream>
#include <deque>
using namespace std;
void showdq(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}
int main()
{
    deque<int> r;
    r.push_back(10);
    r.push_front(20);
    r.push_back(30);
    r.push_front(15);
    cout << "The deque r is: ";
    showdq(r);

    cout << "\nr.size(): " << r.size();
    cout << "\nr.max_size(): " << r.max_size();
    cout << "\nr.at(2): " << r.at(2);
    cout << "\nr.front(): " << r.front();
    cout << "\nr.back(): " << r.back();

    cout << "\nr.pop_front(): ";
    r.pop_front();
    showdq(r);
    return 0;
}