#include <iostream>

using namespace std;

int main()
{
    // int array[1000000000000000000000];    // Error stack area
    // error: array is too large (11515845246265065472 elements)

    int length = 50;
    int array[length];

    int *ptr = new (std::nothrow) int(17);
    *ptr = 20;
    int var = 20; // simmual

    cout << "Before delete - value : " << *ptr << ", address : " << ptr << endl;
    delete ptr;
    // ptr = nullptr;
    cout << "After delete - value : " << *ptr << ", address : " << ptr << endl;

    // Memory leak
    while (true)
    {
        int *ptr = new int;
        cout << "Memory leak - value : " << *ptr << ", address : " << ptr << endl;
        // delete ptr;
    }

    return 0;
}