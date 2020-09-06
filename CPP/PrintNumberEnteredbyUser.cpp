#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;
    
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    // Prints sum 
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     

    return 0;
}

// Enter two integers: 4
// 5
// 4 + 5 = 9

