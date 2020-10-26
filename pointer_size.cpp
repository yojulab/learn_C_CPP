#include <iostream>

int main() {

    double variable = 5;
    double *pointer = &variable;

    using namespace std;
    // address of operator
    cout << "variable - address : " << &variable << ", value : " << variable << ", value with pointer : " << *(&variable) << endl ;
    // variable - address : 0x7fff55c1b940, value : 5, value with pointer : 5
    cout << "variable type - address : " << sizeof(&variable) << ", value : " << variable << ", value with pointer : " << sizeof(*(&variable)) << endl ;
    // variable type - address : Pd, value : 5, value with pointer : d

    // de-reference operator
    cout << "pointer - address : " << &pointer << ", value : " << pointer << ", value with de-reference : " << *pointer << endl ;
    // pointer - address : 0x7fff55c1b938, value : 0x7fff55c1b940, value with de-reference : 5
    cout << "pointer type - address : " << sizeof(&pointer) << ", value : " << pointer << ", value with de-reference : " << sizeof(*pointer) << endl ;
    // pointer type - address : PPd, value : 0x7fff56bc2910, value with de-reference : d
    
    int *ptr_int;
    double *ptr_double;

    cout << "pointer int - address size : " << sizeof(&ptr_int) << ", variable size : " << sizeof(*ptr_int) << endl ;
    // pointer - address : 0x7fff52860918, value : 0x7fff52860920, value with de-reference : 5
    cout << "pointer double - address size : " << sizeof(&ptr_double) << ", variable size : " << sizeof(*ptr_double) << endl ;
    // pointer type - address : 8, value : 0x7fff52860920, value with de-reference : 8


    struct StructInt
    {
        /* data */
        int val01, val02, val03, val04;
    };
    StructInt str_variable;
    StructInt *ptr_variable;
    cout << "variable struct - address size : " << sizeof(&str_variable) << ", variable size : " << sizeof(str_variable) << endl ;
    // pointer int - address size : 8, variable size : 4
    cout << "pointer struct - address size : " << sizeof(&ptr_variable) << ", variable size : " << sizeof(*ptr_variable) << endl ;
    // pointer double - address size : 8, variable size : 8
    
    return 0;
}