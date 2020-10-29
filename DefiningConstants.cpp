#include <iostream>
using namespace std;

#define LENGTH 10
#define NEWLINE '\n'

int main(){
    const int  WIDTH  = 5;
    int area;

    // Error - expression must be a modifiable lvalue
    // LENGTH = 20 ; 
    // WIDTH = 10 ;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
}