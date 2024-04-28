#include <iostream>
using namespace std;
class Family
{
public:
    void Fam()
    {
        cout << "This is a small family" << endl;
    }
    void Num()
    {
        cout << "This family has three members" << endl;
    }
};
// Derived class 1
class Father : public Family
{
public:
    void Mem1()
    {
        cout << "Father is the oldest in the family" << endl;
    }
};
// Derived class 2
class Mother : public Family
{
public:
    void Mem2()
    {
        cout << "Mother is the second oldest after father" << endl;
    }
};
class Child : public Father, public Mother
{
public:
    void Mem3()
    {
        cout << "The child is the youngest in the family" << endl;
    }
};
int main()
{
    Father Ramesh;
    Mother Riti;
    Ramesh.Fam();
    Riti.Num();
    Ramesh.Mem1();
    Riti.Mem2();
    Child Radhika;
    Radhika.Mem3();
    return 0;
}