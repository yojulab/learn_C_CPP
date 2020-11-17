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

   cout << endl;
   // let us have address of the last element in pointer.
   int *ptr_second = &var[MAX - 1];

   for (int i = MAX-1; i >= 0; --i)
   {
      cout << "Array var[" << i << "] = " << var[i] << ", address : " << &var[i] << endl;
      cout << "Pointer of var[" << i << "] = " << *ptr_second << ", address : " << ptr_second << endl;

      // point to the previous location
      ptr_second--;
      // Array var[2] = 200, address : 0x7fff5bc979d4
      // Pointer of var[2] = 1547669, address : 0x7fff5bc979d8
      // Array var[1] = 100, address : 0x7fff5bc979d0
      // Pointer of var[1] = 1547669, address : 0x7fff5bc979d8
      // Array var[0] = 10, address : 0x7fff5bc979cc
      // Pointer of var[0] = 1547669, address : 0x7fff5bc979d8
   }

   cout << endl;
   int *ptr_third;
   int var_second[MAX] = {10, 100, 200};

   for (int i = MAX-1; i >= 0; i--)
   {
      ptr_third = &var[i];
      cout << "Change Array var[" << i << "] = " << var[i] << ", address : " << &var[i] << endl;
      cout << "Change Pointer of var[" << i << "] = " << *ptr_third << ", address : " << ptr_third << endl;

      // point to the previous location
      // Change Array var[2] = 200, address : 0x7fff63c83d64
      // Change Pointer of var[2] = -1435304960, address : 0x7fff63c83d68
      // Change Array var[1] = 100, address : 0x7fff63c83d60
      // Change Pointer of var[1] = -1435304960, address : 0x7fff63c83d68
      // Change Array var[0] = 10, address : 0x7fff63c83d5c
      // Change Pointer of var[0] = -1435304960, address : 0x7fff63c83d68
   }

   return 0;
}