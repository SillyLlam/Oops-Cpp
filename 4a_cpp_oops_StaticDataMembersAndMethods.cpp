// Static variable- by default value is 0
//--visibitlity- inside class
/*Static variables are also known as class variable
It is a class property
---lifetime- till program terminated
(static variable is used to keep the count of the object created)*/
#include <iostream>
using namespace std;
class Employee
{
   int id;
   static int count;

public:
   void setData(void)
   {
      cout << "Enter the ID" << endl;
      cin >> id;
      count++;
   }
   void getData(void)
   {
      cout << "The ID of this employee is " << id << " and this is employee number " << count << endl;
   }
};
int Employee::count = 1000; // Default value is 0 ///used to start the value if count in count++
int main()
{
   Employee harry, rohan, lovish;
   // harry.id=1;
   // harry.count=1;     cannot do this as id and count are private
   harry.setData();
   harry.getData();

   rohan.setData();
   rohan.getData();

   lovish.setData();
   lovish.getData();
   return 0;
}