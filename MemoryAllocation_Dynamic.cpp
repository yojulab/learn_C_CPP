#include <iostream>

using namespace std;

int main()
{
    int length;
    cout << "Input length : " ;
    cin >> length;

    int *ptr = new int [length] ();

    // Memory leak
    for(int i=0; i<length; ++i)
    {
        cout << "Dynamic - value : " << *(ptr+i) << ", address : " << ptr+i << endl;
        // delete ptr;
    }
    delete [] ptr;

    return 0;
}