// OOPS Introduction
/*
1. Classes- Basic template for creating objects
2. Objects- Basic runtime entities
3. Data Abstraction and encapsulation- Wrapping data and function in single unit
4. Inheritance- Properties of one class can be inherited into others
5. Polymorphism- Ability to take more than one forms
6. Dynamic Binding- Code which will execute is not knows until the program runs
7. Message Passing- Object, messate (information) call format

Benefits
1. Better code reusability using objects and inheritance
2. Principle of data hiding helps build secure systems
3. Multiple objects can co-exist without any interference
4. Software complexity ca be easily managed
*/

#include <iostream>
using namespace std;
typedef struct employee // typedef changes name of datatype
{
    // data
    int eID;      // 4
    char favchar; // 1
    float salary; // 4
} ep;
// struct-> data-data, class-data and function usage

#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    // Declaration-
    void setData(int a1, int b2, int c1); // int d1, int e1       /.declaration< tells the compiler to set the data as function will be made using values of a1,b1,c1
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
void Employee::setData(int a1, int b1, int c1)
{           //(::) scope resolution operator  // this statement tells compiler that this setData function is made in Employee
    a = a1; // sets value inside function (setData function)
    b = b1;
    c = c1; // d=d1; e=e1;
}

int main()
{
    Employee Rash;
    // Rash.a=137; //This will show error as 'a' is private
    Rash.setData(1, 2, 5); // values of d and e can also be put here instead of setting below
    Rash.d = 77;
    Rash.e = 35;
    Rash.getData(); // prints values from 'cout'
    return 0;
}
/*
//*** Private class tells that the setData element cannot be accessed outside ***/
//
//*** Class=> extension of structures ( in C)
// structures had limitations
// members are public
// no methods can be put
// Classes= structures + more
// classes can have methods and properties
// classes can make few members as private and few as public

// Structures in C++ are 'Typedef'

// you can declare objects along with class declaration

// example=

// class Employee{
//     //class definition
// } harry, rohan, lovish
// return 0;
// }

// private variable cannot be set directly
// needs some other method