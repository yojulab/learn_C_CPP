#include <iostream>
using namespace std;

int main(){
    // cout << "Size of void : " << sizeof(void) << "\t";
    cout << "Size of char : " << sizeof(char) << "\t";
    cout << "Size of int : " << sizeof(int) << endl;
    // Size of char : 1        Size of int : 4
    cout << "Size of short int : " << sizeof(short int) << "\t";
    cout << "Size of long int : " << sizeof(long int) << endl;
    // Size of short int : 2   Size of long int : 8
    cout << "Size of float : " << sizeof(float) << "\t";
    cout << "Size of double : " << sizeof(double) << endl;
    // Size of float : 4       Size of double : 8
    cout << "Size of long double : " << sizeof(long double) << "\t";
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    // Size of long double : 16        Size of wchar_t : 4

    return 0;
}