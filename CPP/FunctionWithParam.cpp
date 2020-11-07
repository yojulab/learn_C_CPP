#include <iostream>
using namespace std;

// function declaration
int max(int, int);

int main() {
   // local variable declaration:
   int first = 100;
   int second = 200;
   int result;

   // calling first function to get max value.
   result = max(first, second);
   cout << "Max value is : " << result << endl;

   result = max(second, first);
   cout << "Max value is : " << result << endl;

   return 0;
}

// function returning the max between two numbers
int max(int num_first, int num_second) {
   // local variable declaration
   int result;

   if (num_first > num_second)
      result = num_first;
   else
      result = num_second;

   return result;
}