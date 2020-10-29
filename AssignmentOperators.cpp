#include <iostream>
using namespace std;

int main() {
   int first = 21;
   int result ;

   result =  first;
   cout << " =  Operator, Value of result : " <<result<< endl ;

   result +=  first;
   cout << " += Operator, Value of result : " <<result<< endl ;

   result -=  first;
   cout << " -= Operator, Value of result : " <<result<< endl ;

   result *=  first;
   cout << " *= Operator, Value of result : " <<result<< endl ;

   result /=  first;
   cout << " /= Operator, Value of result : " <<result<< endl ;

   result  = 200;
   result %=  first;
   cout << " %= Operator, Value of result : " <<result<< endl ;

   result <<=  2;
   cout << " <<= Operator, Value of result : " <<result<< endl ;

   result >>=  2;
   cout << " >>= Operator, Value of result : " <<result<< endl ;

   result &=  2;
   cout << " &= Operator, Value of result : " <<result<< endl ;

   result ^=  2;
   cout << " ^= Operator, Value of result : " <<result<< endl ;

   result |=  2;
   cout << " |= Operator, Value of result : " <<result<< endl ;

   return 0;
}
