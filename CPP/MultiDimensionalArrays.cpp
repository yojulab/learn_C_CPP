#include <iostream>
using namespace std;

int main()
{
    // int array[100000000];   // Error Link, Understand Memory with Stack, Heap
    // int array[5][2] = new int[5][2];    // Error Can't Allowcate Memory

    int row, column;
    char char_row, char_column;

    cout << "Enter Row and Column: ";
    cin >> row >> column;
    cout << "Display Row and Column : ";
    cin >> char_row;

    char **ptr_matrix = new char*[row];
    for (int i = 0; i < row; i++)
        ptr_matrix[i] = new char[column];

    cout << "Matrix Size : " << row*column << endl;

    // output each array element's value
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            ptr_matrix[i][j] = char_row;
        }

    // output each array element's value
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            cout << "ptr_matrix[" << i << "][" << j << "]: ";
            cout << ptr_matrix[i][j] << endl;
        }

    delete[] ptr_matrix;
    return 0;
}