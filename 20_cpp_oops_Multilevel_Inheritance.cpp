// Notes
/*
 If we are inheriting B from A and C from B: [ A-->B-->C ]
 1. A is the Base class for B and B is the Base class for C
 2. A-->B-->C is called Inheritance Path*/
#include <iostream>
using namespace std;
class Student
{
protected:
   int roll_number;

public:
   void set_roll_number(int);
   void get_roll_number(void);
};
void Student ::set_roll_number(int r)
{
   roll_number = r;
}
void Student ::get_roll_number()
{
   cout << "Enter the roll number: " << endl;
   cin >> roll_number;
   cout << "The roll number of the student is: " << roll_number << endl;
}
class Exam : public Student
{
protected:
   float maths;   // can only be inherited
   float physics; // can only be inherited

public:
   void set_marks(float, float);
   void get_marks(void);
};
void Exam ::set_marks(float m1, float p1)
{
   maths = m1;
   physics = p1;
}
void Exam ::get_marks()
{
   cout << "What is the marks obtained by student in physics? " << endl;
   cin >> physics;
   cout << "What is the marks obtained by student in maths?" << endl;
   cin >> maths;
   cout << "The marks obtained in physics are: " << physics << endl;
   cout << "The marks obtained in maths are: " << maths << endl;
}
class Result : public Exam
{ // Multilevel inheritance
   float percentage;

public:
   void display_result()
   {
      get_roll_number();
      get_marks();
      cout << "Your result is: " << (maths + physics) / 2 << "%" << endl;
   }
};
int main()
{
   Result Stud[4];
   for (int i = 0; i <= 2; i++)
   {
      Stud[i].get_roll_number();
      Stud[i].get_marks();
      Stud[i].display_result();
   }
   return 0;
}