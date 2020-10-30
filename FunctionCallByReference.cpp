#include <iostream>
using namespace std;
 
// function declaration
void swap(int, int);
 
int main () {
   // local variable declaration:
   int first = 100;
   int second = 200;
 
   cout << "Before swap, value of first :" << first << endl;
   cout << "Before swap, value of second :" << second << endl;
 
   // calling a function to swap the values.
   swap(first, second);
 
   cout << "After swap, value of first :" << first << endl;
   cout << "After swap, value of second :" << second << endl;
 
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