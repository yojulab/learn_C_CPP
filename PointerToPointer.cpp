#include <iostream>

using namespace std;
const int MAX = 4;

int main()
{
    char *ptr_names[MAX] = {"Zara", "Hina Ali", "Ali", "Sara Ali"};

    cout << "Pointer address : " << &ptr_names[0] << " / " << &(*ptr_names) << endl;
    // Pointer address : 0x7fff544f09a0 / 0x7fff544f09a0
    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of [" << i << "] = ";
        cout << ptr_names[i] << " / " << *(ptr_names + i) << ", ";
        cout << "address : " << &ptr_names[i] << " / " << (ptr_names + i) << ", ";
        cout << "size : " << sizeof(&ptr_names[i]) << " / " << sizeof(&ptr_names[i]) << " / " << sizeof(ptr_names + i) << endl;
        // Value of [0] = Zara / Zara, address : 0x7fff544f09a0 / 0x7fff544f09a0, size : 8 / 8 / 8
        // Value of [1] = Hina Ali / Hina Ali, address : 0x7fff544f09a8 / 0x7fff544f09a8, size : 8 / 8 / 8
        // Value of [2] = Ali / Ali, address : 0x7fff544f09b0 / 0x7fff544f09b0, size : 8 / 8 / 8
        // Value of [3] = Sara Ali / Sara Ali, address : 0x7fff544f09b8 / 0x7fff544f09b8, size : 8 / 8 / 8
    }

    // char **ptr_ptrs = {"Zara", "Hina Ali", "Ali", "Sara Ali"};
    char **ptr_ptrs = ptr_names;        // char** ptr_ptrs = new char[4][255];
    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of " << i << " = ";
        cout << ptr_ptrs + i << " / " << *(ptr_ptrs + i) << ", ";
        cout << "address : " << &(*(ptr_ptrs + i)) << " / " << &(**(ptr_ptrs + i)) << endl;
        // Value of 0 = 0x7fff5658f9a0 / Zara, address : 0x7fff5658f9a0 / Zara
        // Value of 1 = 0x7fff5658f9a8 / Hina Ali, address : 0x7fff5658f9a8 / Hina Ali
        // Value of 2 = 0x7fff5658f9b0 / Ali, address : 0x7fff5658f9b0 / Ali
        // Value of 3 = 0x7fff5658f9b8 / Sara Ali, address : 0x7fff5658f9b8 / Sara Ali
    }

    return 0;
}