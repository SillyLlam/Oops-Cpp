#include <iostream>
using namespace std;
class Shop
{
   int itemId[100];
   int itemPrice[100];
   int counter;

public:
   void initCounter(void) { counter = 0; }
   void setPrice(void);
   void displayPrice(void);
};
void Shop::setPrice(void)
{
   cout << "Enter ID of your item no. " << counter + 1 << endl;
   cin >> itemId[counter];
   cout << "Enter Price of your item" << endl;
   cin >> itemPrice[counter];
   counter++;
}
void Shop::displayPrice(void)
{
   for (int i = 0; i < counter; i++)
   {
      cout << "Price of Item with Id" << itemId[i] << "is" << itemPrice[i] << endl;
   }
}
int main()
{
   Shop dukaan;
   dukaan.initCounter();
   for (int j = 0; j < 3; j++)
   {
      dukaan.setPrice();
   }
   dukaan.displayPrice();
   return 0;
}