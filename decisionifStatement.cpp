#include <iostream>
using namespace std;
 
int main () {
   // local variable declaration:
   int first = 100;
 
   // check the boolean condition
   if( first == 10 ) {
      // if condition is true then print the following
      cout << "Value of first is 10" << endl;
   } else if( first == 20 ) {
      // if else if condition is true
      cout << "Value of first is 20" << endl;
   } else if( first == 30 ) {
      // if else if condition is true 
      cout << "Value of first is 30" << endl;
   } else {
      // if none of the conditions is true
      cout << "Value of first is not matching" << endl;
   }
   cout << "Exact value of first is : " << first << endl;
 
   return 0;
}