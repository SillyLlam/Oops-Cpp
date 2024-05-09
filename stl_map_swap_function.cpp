#include <iostream>
#include <map>
#include<iterator>
using namespace std;
int main()
{
    map<int, char> m1, m2;

    m1[1] = 'a';
    m1[2] = 'b';
    m1[3] = 'c';
    m1[4] = 'd';
    m1.insert(pair<int, char>(5, 'e'));
    m1.insert(pair<int, char>(6, 'f'));
    m1.insert(pair<int, char>(7, 'g'));

    m2[8] = 'h';
    m2[9] = 'i';
    m2[10] = 'j';
    m2[11] = 'k';
    m2[12] = 'l';
    m2.insert(pair<int, char>(13, 'm'));
    m2.insert(pair<int, char>(14, 'n'));
    m2.insert(pair<int, char>(15, 'o'));
    m2.insert(pair<int, char>(16, 'p'));
    m2.insert(pair<int, char>(17, 'q'));
    
    //swaping of queues
    swap(m1,m2);

    map<int, int>::iterator it;
    //print the elements of maps
    cout<<"m1:\n"<<"\tKEY\tELEMENTS\n";
    for(auto it=m1.begin();it!=m1.end();it++)
    cout<<"\t"<<it->first<<"\t"<<it->second<<'\n';

    cout<<"m2:\n"<<"\tKEY\tELEMENT\n";
    for(auto it= m2.begin();it!=m2.end();it++)
    cout<<"\t"<<it->first<<"\t"<<it->second<<'\n';



    return 0;
}