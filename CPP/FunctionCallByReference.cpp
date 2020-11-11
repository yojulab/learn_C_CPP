#include <iostream>
using namespace std;
 
// function declaration
void swap(int, int);
void swapByReference(int &, int &);
 
int main () {
   // local variable declaration:
   int first = 100;
   int second = 200;
 
   cout << "Before swap - first, second :" << first << ", " << second << endl;
   // Before swap - first, second :100, 200
   /* calling first function to swap the values.*/
   swap(first, second);
   cout << "After swap - first, second :" << first << ", " << second << endl;
   // After swap - first, second :100, 200

   cout << "Before swap by reference - first, second :" << first << ", " << second << endl;
   // Before swap by reference - first, second :100, 200
   /* calling function to swap by reference.*/
   swapByReference(first, second);
   cout << "After swap by reference - first, second :" << first << ", " << second << endl;
   // After swap by reference - first, second :200, 100
 
   return 0;
}

// function definition to swap the values.
void swap(int x, int y) {
   int temp;

   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
  
   return;
}

void swapByReference(int &x, int &y)
{

   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */

   return;
}