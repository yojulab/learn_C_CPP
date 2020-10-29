#include <iostream>

int main(){
    using namespace std;
    enum color { Monday, Tuesday, Friday=4, Saturday } enumRed;
    enumRed = color::Monday;
    // color::Saturday = 5;     // error
    cout << "Monday : " << enumRed << ',';
    cout << "Tuesday : " << color::Tuesday << endl;
    cout << "Friday : " << color::Friday << ',';
    cout << "Saturday : " << color::Saturday << endl;

    return 0;
}