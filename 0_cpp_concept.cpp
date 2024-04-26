#include <iostream>
#include <string>
using namespace std;

// Building of a function
int add(int a, int b)
{
      int c;
      c = a + b;
      return c;
}

// Object and classes
// Class
class Employee
{
public:
      string name;
      int salary;
      int sp;

      // Constructor initialization
      Employee(string name, int salary, int sp)
      {
            this->name = name;         // this-> comes from above
            this->salary = salary;     // this-> comes from above
            this->secretPassword = sp; // setting secretPassword
      }
      void printDetails()
      {
            cout << "The name of our first employee is " << this->name << " and her salary is " << this->salary << " Dollars" << endl;

      } // method //"this->name or this->salary" is used to access the object which is being called below

      // To access secret Password
      void getsecretPassword()
      {
            cout << "The secret password is " << this->secretPassword;
      }

private:
      int secretPassword;
};
// Inheritance - properties of base class are inherited by child class
// child class
class Programmer : public Employee
{
public:
      int errors;
};
int main()
{

      //    /*cout<<"Hello world"<<endl;
      //    cout<<"Next line";

      //    int a,b,c;
      //    short _s22222a=9;
      //    short Sa=9;//case sensitive
      //    cout<<_s22222a;*/

      // // camelcase notation
      //    /*int marksInMath=33;
      //    cout<<"The marks of student "<<marksInMath;*/

      // // data types
      //     //  short a;
      //     //  int b;
      //     //  long c;
      //     //  long long d;
      //     //  cout<<sizeof(short)<<endl;
      //     //  float score=55.55;//can put "float const score" to make the values unchangable in next line
      //     //  score = 333;
      //     //  cout<<score<<endl;
      //     //  double score2=44.55555;
      //     //  cout<<"the score is "<<score2;

      // // operators
      //     //  int a,b;
      //     //  cout<<"Enter first number"<<endl;
      //     //  cin>>a;
      //     //  cout<<"Enter second number"<<endl;
      //     //  cin>>b;
      //     //  cout<<"Addition:"<<" "<<a+b<<endl;
      //     //  cout<<"Subtraction:"<<" "<<a-b<<endl;
      //     //  cout<<"Division:"<<" "<<(float)a/b<<endl;//for decimal precision
      //     //  cout<<"Multiplication:"<<" "<<a*b<<endl;

      // // if else
      //     //  int age;
      //     //  cout<<"Enter your age: "<<endl;
      //     //  cin>>age;
      //     //  if(age>150 || age<0){
      //     //     cout<<"invalid age"<<endl;
      //     //  }
      //     //  else if(age>=18){
      //     //     cout<<"you can vote"<<endl;
      //     //  }
      //     //  else{
      //     //     cout<<"you cannot vote"<<endl;
      //     //  }

      // // switch case
      //     // int age;
      //     // cout << "Enter your age: " << endl;
      //     // cin >> age;
      //     // switch (age)
      //     // {
      //     // case 14:
      //     //    cout << "You are 14 years old" << endl;
      //     //    break;
      //     // case 18:
      //     //    cout << "You are 18 years old" << endl;
      //     //    break;
      //     // default:
      //     //    cout << "You are neither 14 nor 18 years old" << endl;
      //     // }

      // //looping statements
      // //while loop
      //     //int index=0;
      //     // while(index<34)
      //     // {
      //     //    cout<<"We are at index:"<<index<<endl;
      //     //    index+=1;
      //     // }

      // //do while
      //     // do
      //     // {
      //     //    cout<<"we are at index: "<<index<<endl;
      //     //    index+=1;
      //     // } while (index<22);

      // //for loop
      //     // for(int i=1; i<=33;i++){
      //     //    cout<<"your i is: "<<i<<endl;
      //     // }

      // //functions calling
      //     // int a, b;
      //     // cout<<"Enter a: "<<endl;
      //     // cin>>a;
      //     // cout<<"Enter b: "<<endl;
      //     // cin>>b;

      //     // cout<<"The function returned: "<<add(a,b)<<endl;

      // //array
      //     // int arr[3]= {23,44,56};
      //     //array index 0 1  2
      //     // cout<<arr[0];

      // //1D array
      //     //   int marks[6];
      //     //   for (int i=1; i<6; i++)
      //     //   {
      //     //    cout<<"Marks of student is "<<i<<" th student "<<endl;
      //     //    cin>>marks[i];
      //     //   }
      //     //   for (int i=1; i<6; i++)
      //     //   {
      //     //    cout<<"Marks of "<<i<<"th student is: "<<marks[i]<<endl;
      //     //   }

      // 2D array
      //     // int arr2d[3][5]={{2,4,6,8,10},{1,3,5,7,9},{11,22,33,44,55}};
      //     // for (int i=0;i<3;i++){
      //     //       for (int j=0;j<5;j++){
      //     //       cout<<"The value of "<<i<<"th row and "<<j<<"th column is "<<arr2d[i][j]<<endl;
      //     // }
      //     // }

      // Typecasting
      //     //  int a=343;
      //     //  float b= 43.443298432938;
      //     //  cout<<(int) b<<endl;
      //     //  cout<<(float) a<<endl;

      // Strings
      //     // string name="rashmika";
      //     // cout<<"The name is "<<name<<endl;
      //     // cout<<"The length of string is "<<name.length()<<endl;
      //     // cout<<"The substring of string is "<<name.substr(1,3)<<endl;
      //     // cout<<"The substring of string is "<<name.substr(3,7)<<endl;

      // Pointers
      //     //  int a=2;                                                            //can also be done for float by putting float datatype
      //     //  int* ptra;                                                          //ptra pointer
      //     //  ptra = &a;                                                          //& address of a
      //     //  cout<<"The address of a "<<ptra<<endl;                              //prints address of a
      //     //  cout<<"The address of a "<<&a<<endl;
      //     //  cout<<"The value of a is given by the address of a "<<*ptra<<endl;  //prints value of a //star * is a derefferencing operator
      //     //  cout<<"The value of a is "<<a<<endl;

      // Class and Objects
      // Object
      //  Employee rash;
      //  //rash.name="Rashmika";
      //  //rash.salary=100;
      //  rash.printDetails();
      //   //  //cout<<"The name of our first employee is "<<rash.name<<" and her salary is "<<rash.salary<<" Dollars"<<endl;

      // Class and Objects
      // Constructor
      Employee rash("Rashmika", 355, 23223);
      rash.printDetails();
      // // //cout<<rash.secretPassword;    //this will show error as the class declared is private

      // to access secret password
      rash.getsecretPassword();
      return 0;
}
