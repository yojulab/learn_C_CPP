#include <iostream>
using namespace std;

int main() {
   bool first = false;  // 0
   bool second = true; // 1

   if(first && second) {
      cout << "first && second is true"<< endl ;
   }
   
   if(first || second) {
      cout << "first || second is true"<< endl ;
   }
   
   /* Let's change the values of  first and second */
   if(first && second) {
      cout << "Condition is true"<< endl ;
   } else {
      cout << "Condition is not true"<< endl ;
   }
   
   if(!(first && second)) {
      cout << "Condition is true"<< endl ;
   }
   
   return 0;
}

// Condition is true
// Condition is true
// Condition is not true
// Condition is true