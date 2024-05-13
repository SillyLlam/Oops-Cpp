#include<iostream>
#include<iomanip>
 using namespace std;
 int main()
 {
 int a,b;
 cin >> a>> b;
 try
 {
 if (b!=0)
 {
 cout <<  "result(a/b)="<<setprecision(2)<<(float)a/b;
 }
 else
 {
 throw(b);
 }
 }
 catch(int i)
 {
 cout <<"exception caught";
 }
 }
