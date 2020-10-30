#include <iostream>
#include <cstring>
using namespace std;

#include <iomanip>
using std::setw;

int main()
{

    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    cout << "Greeting message: ";
    cout << greeting << endl;
    // Greeting message: Hello

    char wouldwithoutnull[5] = {'W', 'o', 'r', 'l', 'd'};
    cout << "World without null message: ";
    cout << wouldwithoutnull << endl;
    // World without null message: WorldHello

    char wouldwithnull[6] = {'W', 'o', 'r', 'l', 'd', '\0'};
    cout << "World with null message: ";
    cout << wouldwithnull << endl;
    // World with null message: World

    short count = 0;
    while (greeting[count] != NULL)
    {
        cout << "while statement with null[" << count << "] : " << greeting[count] << endl;
        count++;
        // while statement with null[0] : H
        // while statement with null[1] : e
        // while statement with null[2] : l
        // while statement with null[3] : l
        // while statement with null[4] : o
    }

    for (int i=0; i<=strlen(greeting); i++)
    {
        cout << "for statement with null[" << i << "] : " << greeting[i] << endl;
        // for statement with null[0] : H
        // for statement with null[1] : e
        // for statement with null[2] : l
        // for statement with null[3] : l
        // for statement with null[4] : o
        // for statement with null[5] :         
    }

    return 0;
}