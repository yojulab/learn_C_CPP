#include <iostream>
using namespace std;

main() {
   int first = 21, second = 10;

   if( first == second ) {
      cout << "first is equal to second" << endl ;
   } else {
      cout << "first is not equal to second" << endl ;
   }
   
   if( first < second ) {
      cout << "first is less than second" << endl ;
   } else {
      cout << "first is not less than second" << endl ;
   }
   
   if( first > second ) {
      cout << "first is greater than second" << endl ;
   } else {
      cout << "first is not greater than second" << endl ;
   }
   
   /* Let's change the values of first and second */
   first = 5, second = 20;
   if( first <= second ) {
      cout << "first is either less than \ or equal to  second" << endl ;
   }
   
   if( second >= first ) {
      cout << "second is either greater than \ or equal to second" << endl ;
   }
   
   return 0;
}