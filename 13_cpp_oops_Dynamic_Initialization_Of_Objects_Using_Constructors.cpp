#include <iostream>
using namespace std;
class BankDeposit
{
   int principal;
   int years;
   float interestRate;
   float returnValue;

public:
   BankDeposit() {}                    // This Default constructor is initialized for making the compiler to read from where to start  
                                       // Dynamic Initialization of Constructor (Default Constructor)
   BankDeposit(int p, int y, float r); // r can be a value like 0.04 (4/100) percentage to numerical  //Dynamic Initialization of Constructor (Parameterized Constructor)
   BankDeposit(int p, int y, int R);   // r can be a value like 14 (%)                                //Dynamic Initialization of Constructor (Parameterized Constructor)
   void show();
};
BankDeposit::BankDeposit(int p, int y, float r)
{
   principal = p;
   years = y;
   interestRate = r;
   returnValue = principal;
   for (int i = 0; i < y; i++)
   {
      returnValue = returnValue * (1 + interestRate);
   }
}
BankDeposit::BankDeposit(int p, int y, int R)
{
   principal = p;
   years = y;
   interestRate = float(R) / 100;
   returnValue = principal;
   for (int i = 0; i < y; i++)
   {
      returnValue = returnValue * (1 + interestRate);
   }
}
void BankDeposit::show()
{
   if (years == 1)
      cout << endl
           << "Principal amount was " << principal
           << ". Return value after " << years
           << " year is " << returnValue << endl;
   else
      cout << endl
           << "Principal amount was " << principal
           << ". Return value after " << years
           << " years is " << returnValue << endl;
}
int main()
{
   BankDeposit bd1, bd3;
   int p, y;
   float r;
   int R;

   cout << "Enter the Principal amount: " << endl;
   cin >> p;
   cout << "Enter the Number of Years: " << endl;
   cin >> y;
   cout << "Enter the Rate of Interest: " << endl;
   cin >> r;
   bd1 = BankDeposit(p, y, r);
   bd1.show();

   cout << "Enter the Principal amount: " << endl;
   cin >> p;
   cout << "Enter the Number of Years: " << endl;
   cin >> y;
   cout << "Enter the Rate of Interest: " << endl;
   cin >> R;
   BankDeposit bd2 = BankDeposit(p, y, R); // Object can also be shown like this without initializing at the start
   bd2.show();
   return 0;
}