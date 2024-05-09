#include<iostream>
using namespace std;
template<typename T>
T mymax(T a, T b){
    return(a>b)?a:b;
}
int main()
{
    cout<<mymax<int>(3,5)<<endl;
    cout<<mymax<float>(4.5,6.7)<<endl;
    cout<<mymax<char>('y','n')<<endl;
   return 0;
}