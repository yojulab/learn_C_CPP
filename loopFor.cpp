#include <iostream>
using namespace std;

int main() {
   // for loop execution
   for (int first = 10; first < 20; first++)
   {
      cout << "value of first: " << first << endl;
      if (first > 16)
      { // with break statement
         // terminate the loop
         break;
      }
   }
   // cout << "finally value of first: " << first << endl;  // Error
   return 0;
}