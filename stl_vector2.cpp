#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> m1;
    for (int i = 1; i <= 5; i++)
        m1.push_back(i);

    cout << "Size: " << m1.size();
    cout << "\nCapacity: " << m1.capacity();
    cout << "\nMax_size: " << m1.max_size();

    // resizes the vector to size 4
    m1.resize(4);

    // prints the vector size after resize()
    cout << "\nSize: " << m1.size();

    // checks if the vector is empty or not
    if (m1.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";

    // Shrinks the vector
    m1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = m1.begin(); it != m1.end(); it++)
        cout << *it << " ";
    return 0;
}