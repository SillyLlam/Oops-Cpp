//When a friend function is defined inside the class the class becomes a friend class
#include<iostream>
using namespace std;
class A{
    int x= 5; 
    friend class B; // friend class.
};
class B{
    public:
    void display(A &a){
        cout<<"The value of x is: "<<a.x<<endl;
    }
};
int main()
{
    A Radha;
    B Rashmika;
    Rashmika.display(Radha);
   return 0;
}