#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,char>m1;
    map<int,char>m2;

    m1[1]='a';
    m1.insert(pair<int,char>(2,'b'));
    m1.insert(pair<int,char>(3,'c'));
    m1[4]='d';

    m2.insert(pair<int,char>(1,'r'));
    m2.insert(pair<int,char>(2,'s'));
    m2['t']=3;

    cout<<"Using at function: "<<endl;
    cout<<"Element at m2[2]= "<<m2.at('r')<<endl;

    cout<<"Element at m1['c']= "<<m1.at('c')<<endl;
   return 0;
}