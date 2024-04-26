#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;
    static int count;

public:
    void setID(void)
    {
        salary = 123;
        cout << "Enter the id of employee " << endl;
        cin >> id;
        count++;
    }
    void getID(void)
    {
        cout << "The id of this employee is: " << id << " and " << count << " this is employee count " << endl;
    }
    static void displayID(void)
    {
        for (int x = 0; x < count; x++)
        {
            cout << "The value of count is: " << count << endl;
            break;
        }
    }
};
int Employee::count;
int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setID();
    // harry.getID();
    Employee fb[4]; // dont need to add objects one by one this is easier for fuck sake lmao
    for (int i = 0; i < 4; i++)
    {
        fb[i].setID();
        fb[i].getID();
    }
    Employee::displayID();
    return 0;
}