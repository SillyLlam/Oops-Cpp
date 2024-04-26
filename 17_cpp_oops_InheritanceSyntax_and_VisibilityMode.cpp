#include <iostream>
using namespace std;
class Employee
{ // Base Class
public:
    int id;
    float salary;
    Employee(int inpID)
    {
        id = inpID;
        salary = 34.0;
    }
    Employee() {}
};

// Derived Class Syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Notes-
1. Default visibility mode is Private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the Derived Class
4. Private members are never inherited
*/

// Creating a Programmer Class derived from Employee Base Class
class Programmer : Employee
{ // Default Visibility mode is private
public:
    int languageCode = 9;
    Programmer(int inpId)
    {
        id = inpId;
    }
    void display()
    {
        cout << id << endl;
    }
};
class Coder : public Employee // Visibility mode is public now
{                             // Default Visibility mode is private
public:
    Coder(int inpId)
    {
        id = inpId;
        salary=56;
    }
    
    void display()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee Rashmika(1), Radha(2);
    cout << "Salary of Rashmika: " << Rashmika.salary << endl;
    cout << "Salary of Radha: " << Radha.salary << endl;
    Programmer skillF(10);
    // cout<<skillF.id<<endl; // This will show error as id in Programmer(Inherited Class) is private (defaultly)
    cout << skillF.languageCode << endl;
    skillF.display();
    Coder skillY(30);
    cout<<skillY.salary<<endl;
    cout << skillY.id << endl; // This will print because id (visibility mode) in the class (Coder) is public
    return 0;
}