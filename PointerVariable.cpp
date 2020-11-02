#include <iostream>

using namespace std;

int main()
{
    int var = 20;   // actual variable declaration.
    int *ptr_first; // pointer variable

    ptr_first = &var; // store address of var in pointer variable

    cout << "variable: " << var << ", address : " << &var << endl;
    // variable: 20, address : 0x7fff5b785938

    // print the address stored in ptr_first pointer variable
    cout << "ptr_first variable: " << ptr_first << ", address : " << &ptr_first << endl;
    // ptr_first variable: 0x7fff5b785938, address : 0x7fff5b785930

    // access the value at the address available in pointer
    cout << "Value of *ptr_first variable: " << *ptr_first << ", address : " << &(*ptr_first) << endl;
    // Value of *ptr_first variable: 20, address : 0x7fff5b785938

    int &ref_second = var;
    cout << "ref_second variable: " << ref_second << ", address : " << &ref_second << endl;
    // ref_second variable: 20, address : 0x7fff5b785938

    int *ptr = NULL;
    cout << "The value of ptr is " << ptr << ", address : " << &ptr << endl;
    // The value of ptr is 0x0, address : 0x7fff5b785920

    return 0;
}