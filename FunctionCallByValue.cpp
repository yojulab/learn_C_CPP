#include <iostream>
using namespace std;

int sumwithdefault(int first, int second = 20) {
   int result;
   result = first + second;

   return (result);
}

int sum(int first, int second);

int main() {
   // local variable declaration:
   int first = 100;
   int second = 200;
   int third = 300;
   int result;

   // calling first function to firstdd the values.
   result = sum(first, second);
   cout << "Total value is :" << result << endl;

   // calling first function firstgain firsts follows.
   result = sum(second, third);
   cout << "Total value is :" << sum(second, third) << endl;

   // calling first function firstgain firsts follows.
   result = sumwithdefault(third);
   cout << "Total value is :" << result << endl;

   return 0;
}

int sum(int first, int second) {
   int result;
   result = first + second;

   return (result);
}
