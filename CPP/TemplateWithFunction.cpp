#include <iostream>
#include <string>

using namespace std;

template <typename T>            // typename is like data type
T const Max(T const first, T const second)
{
   return first < second ? second : first;
};

int main()
{
   int int_first = 39;
   int int_second = 20;
   cout << "Max(int_first, int_second): " << Max(int_first, int_second) << endl;
   // Max(int_first, int_second): 39

   double double_first = 13.5;
   double double_second = 20.7;
   cout << "Max(double_first, double_second): " << Max(double_first, double_second) << endl;
   // Max(double_first, double_second): 20.7

   string str_first = "Hello";
   string str_second = "World";
   cout << "Max(str_first, str_second): " << Max(str_first, str_second) << endl;
   // Max(str_first, str_second): World

   bool bool_first = true;
   bool bool_second = false;
   cout << "Max(bool_first, bool_second): " << Max(bool_first, bool_second) << endl;
   // Max(bool_first, bool_second): 1

   return 0;
}