#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
   int var[MAX] = {10, 100, 200};

   int *ptr_first = var;

   for (int i = 0; i < MAX; i++)
   {
      cout << "Array var[" << i << "] = " << var[i] << ", address : " << &var[i] << endl;

      cout << "Pointer of var[" << i << "] = " << *ptr_first << ", address : " << ptr_first << endl;

      // point to the next location
      ptr_first++;
      // Array var[0] = 10, address : 0x7fff5bc979cc
      // Pointer of var[0] = 10, address : 0x7fff5bc979cc
      // Array var[1] = 100, address : 0x7fff5bc979d0
      // Pointer of var[1] = 100, address : 0x7fff5bc979d0
      // Array var[2] = 200, address : 0x7fff5bc979d4
      // Pointer of var[2] = 200, address : 0x7fff5bc979d4
   }

   // let us have address of the last element in pointer.
   int *ptr_second = &var[MAX - 1];

   for (int i = MAX-1; i >= 0; i--)
   {
      cout << "Array var[" << i << "] = " << var[i] << ", address : " << &var[i] << endl;
      cout << "Pointer of var[" << i << "] = " << *ptr_first << ", address : " << ptr_first << endl;

      // point to the previous location
      ptr_second--;
      // Array var[2] = 200, address : 0x7fff5bc979d4
      // Pointer of var[2] = 1547669, address : 0x7fff5bc979d8
      // Array var[1] = 100, address : 0x7fff5bc979d0
      // Pointer of var[1] = 1547669, address : 0x7fff5bc979d8
      // Array var[0] = 10, address : 0x7fff5bc979cc
      // Pointer of var[0] = 1547669, address : 0x7fff5bc979d8
   }

   return 0;
}