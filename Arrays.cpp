#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main()
{

    int array_number[10]; // array_number is an array of 10 integers

    // initialize elements of array array_number to 0
    auto cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        array_number[i] = i + 100; // set element at location i to i + 100
        cnt += 5;
    }
    // cout << "Element" << setw(13) << "Value" << endl;
    cout << "Element"
         << "\t"
         << "Value" << endl;

    // output each array element's value
    for (int j = 0; j < 10; j++)
    {
        // cout << setw(7) << j << setw(13) << array_number[j] << endl;
        cout << "\t" << j << "\t" << array_number[j] << endl;
    }

    return 0;
}