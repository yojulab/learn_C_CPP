#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main()
{

    int array_number[10]; // array_number is an array of 10 integers

    // initialize elements of array array_number to 0
    auto count = 0;
    for (int i = 0; i < 10; i++)
    {
        count += 5;
        array_number[i] = i + count; // set element
    }
    cout << "Element" << setw(13) << "Value" << endl;
    // cout << "Element"
    //      << "\t"
    //      << "Value" << endl;

    // output each array element's value
    // for (int j = 0; j < 10; j++)
    for (int j = 0; j < 11; j++)        // Real Time Error
    {
        cout << setw(7) << j << setw(13) << array_number[j] << endl;
        // cout << "\t" << j << "\t" << array_number[j] << endl;
        
        // Element        Value
        //     0            5
        //     1           11
        //     2           17
        //     3           23
        //     4           29
        //     5           35
        //     6           41
        //     7           47
        //     8           53
        //     9           59
        //     10  -2023482510        
    }

    return 0;
}