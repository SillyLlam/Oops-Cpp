#include <iostream>
using namespace std;
template <typename T>
T myMax(T a, T b)
{
    return (a > b) ? a : b;
}
int main()
{
    cout << myMax<int>(2, 4) << endl;
    cout << myMax<double>(5.6, 3.7) << endl;
    cout << myMax<char>('m', 'r') << endl;
    return 0;
}