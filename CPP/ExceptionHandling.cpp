#include <iostream>
#include <string>

using namespace std;

double division(int a, int b)
{
    int result = 0;
    try
    {
        if (b == 0)
        {
            throw "Division by zero condition!";
            // Floating point exception: 8      // Error When comment
        }
        result = a / b;
    }
    catch (const char *msg) // exception of type const char*
    {
        cout << "Exception caught Floating : " << msg << endl;
        return -1;
    }
    catch (std::exception msg)
    {
        cout << "Exception caught in division()" << endl;
        cout << msg.what() << endl;
        return -1;
    }
    return result;
}

int main()
{
    int first = 50;
    int second = 0;

    try
    {
        double third = division(first, second);
        cout << "Exception caught in try : " << third << endl;
    }
    catch (std::exception msg)
    {
        cout << "Exception caught in main()" << endl;
        cout << msg.what() << endl;
    }

    return 0;
}