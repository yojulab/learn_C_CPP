#include <iostream>
#include <ctime>

using namespace std;

// function to generate and retrun random numbers.
int* getRandom()
{

    static int rtn[10];

    // set the seed
    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; ++i)
    {
        rtn[i] = rand();
        cout << rtn[i] << endl;
        // 11030609
        // 707851821
        // 1953634814
        // 1862839915
        // 586361792
        // 180182061
        // 367956957
        // 1647156586
        // 549047425
        // 102840816
    }

    return rtn;
}

// main function to call above defined function.
int main()
{

    // a pointer to an int.
    int *ptr;

    ptr = getRandom();

    for (int i = 0; i < 10; i++)
    {
        cout << "*(ptr + " << i << ") : " << *(ptr + i) << endl;
        // *(ptr + 0) : 11030609
        // *(ptr + 1) : 707851821
        // *(ptr + 2) : 1953634814
        // *(ptr + 3) : 1862839915
        // *(ptr + 4) : 586361792
        // *(ptr + 5) : 180182061
        // *(ptr + 6) : 367956957
        // *(ptr + 7) : 1647156586
        // *(ptr + 8) : 549047425
        // *(ptr + 9) : 102840816        
    }

    return 0;
}