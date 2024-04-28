#include<iostream>
using namespace std;
class Triangle{
  public:
  virtual void areaT(){
    cout<<"Area of triangle is 0.5*b*h"<<endl;
  } 
  void areaRect(){
    cout<<"Area of Rectangle is b*h"<<endl;
  } 
};
class Circle: public Triangle{
    public:
void areaT(){   //should be same name as virtual void areaT in class Triangle
    cout<<"Area of triangle is 1/2*b*h"<<endl;
}
void areaRectangle(){
    cout<<"Area of rectangle is Base*height"<<endl;
}
};
int main()
{
    Triangle* ptr;
    Circle tri;
    ptr=&tri;
    ptr->areaT();
    ptr->areaRect();
   return 0;
}