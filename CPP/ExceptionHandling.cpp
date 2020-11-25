#include <iostream>
#include <string>

using namespace std;

double division(int a, int b)
{
    int result = 0;
    try
    {
        int result = a / b;
    }
    catch (std::exception exp)
    {
        cout << "Exception caught in division()" << endl;
        cout << exp.what() << endl;
    }
    return result;
}

int main()
{
    int x = 50;
    int y = 0;
    double z = 0;

    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (std::exception msg)
    {
        cout << "Exception caught in main()" << endl;
        cout << msg.what() << endl;
    }

    return 0;
}