#include <iostream>
using namespace std;

// function declaration and definition
void max() {
   int num_first = 100;
   int num_second = 200;
   int result;

   if (num_first > num_second)
      result = num_first;
   else
      result = num_second;

   cout << "Max value is : " << result << endl;
}

int main() {
//    result = max();   // Error
   max();
   max();

   return 0;
}
