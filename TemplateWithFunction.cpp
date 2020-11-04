#include <iostream>
#include <string>

using namespace std;

template <typename T>
T const Max(T const a, T const b)
{
   return a < b ? b : a;
};

int main()
{
   int i = 39;
   int j = 20;
   cout << "Max(i, j): " << Max(i, j) << endl;
   // Max(i, j): 39

   double f1 = 13.5;
   double f2 = 20.7;
   cout << "Max(f1, f2): " << Max(f1, f2) << endl;
   // Max(f1, f2): 20.7

   string s1 = "Hello";
   string s2 = "World";
   cout << "Max(s1, s2): " << Max(s1, s2) << endl;
   // Max(s1, s2): World

   return 0;
}