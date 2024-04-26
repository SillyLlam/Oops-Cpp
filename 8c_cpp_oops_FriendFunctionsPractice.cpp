#include <iostream>
using namespace std;
class Tax;
class Salary
{
private:
    int salary;

public:
    void setsalary(int sal)
    {
        salary = sal;
    }
    friend void add(Salary, Tax); // declaration of function
};
class Tax
{
private:
    int tot_tax;

public:
    void settax(int total_tax)
    {
        tot_tax = total_tax;
    }
    friend void add(Salary, Tax); // declaration of function
};
void add(Salary o1, Tax o2)
{
    cout << "The total income is: " << o1.salary + o2.tot_tax << endl;
}
int main()
{
    Salary a1;
    a1.setsalary(300);
    Tax b1;
    b1.settax(5);
    add(a1, b1); // add function used which was declared above in classes
    return 0;
}