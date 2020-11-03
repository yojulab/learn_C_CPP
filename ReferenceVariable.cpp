#include <iostream>
// #include <typeinfo>

using namespace std;

int main()
{
    /* declare simple variables */
    int first;
    // declare reference variables
    int &ref_first = first;

    first = 5;
    cout << "Value of first : " << first << ", address : " << &first << endl;
    // Value of first : 5, address : 0x7fff5c6cc978
    cout << "Value of first reference : " << ref_first << ", address : " << &ref_first << endl;
    // Value of first reference : 5, address : 0x7fff5c6cc978
    ref_first = 6;
    cout << "Value of first : " << first << ", address : " << &first << endl;
    // Value of first : 6, address : 0x7fff5c6cc978
    
    double second = 11.7;
    double &ref_second = second;
    cout << "Value of second : " << second << endl;
    // Value of second : 11.7
    cout << "Value of second reference : " << ref_second << endl;
    // Value of second reference : 11.7

    return 0;
}