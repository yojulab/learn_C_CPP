#include <iostream>
#include <typeinfo>

int main() {

    double variable = 5;
    double *pointer = &variable;

    using namespace std;
    // address of operator
    cout << "variable - address : " << &variable << ", value : " << variable << ", value with pointer : " << *(&variable) << endl ;
    // variable - address : 0x7fff55c1b940, value : 5, value with pointer : 5
    cout << "variable type - address : " << typeid(&variable).name() << ", value : " << variable << ", value with pointer : " << typeid(*(&variable)).name() << endl ;
    // variable type - address : Pd, value : 5, value with pointer : d

    // de-reference operator
    cout << "pointer - address : " << &pointer << ", value : " << pointer << ", value with de-reference : " << *pointer << endl ;
    // pointer - address : 0x7fff55c1b938, value : 0x7fff55c1b940, value with de-reference : 5
    cout << "pointer type - address : " << typeid(&pointer).name() << ", value : " << pointer << ", value with de-reference : " << typeid(*pointer).name() << endl ;
    // pointer type - address : PPd, value : 0x7fff56bc2910, value with de-reference : d
    
    return 0;
}