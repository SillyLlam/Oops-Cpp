#include<iostream>
using namespace std;
class Simple{
int data1, data2, data3;
public:
Simple(int a=0, int b=8, int c=8){             //constructor parametrized
    data1=a;
    data2=b;
    data3=c;
}
void printnumber();
};
void Simple:: printnumber(){
cout<<data1<<" and "<<data2<<" and "<<data3<<endl;
}
int main()
{
    Simple meet(1);          //this prints default value of data2 which is 9
//  Simple num(1,2);        //this would print value of data2 as 2 (overriding function)
    meet.printnumber();
   return 0;
}