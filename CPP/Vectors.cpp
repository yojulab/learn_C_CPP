#include <iostream>
#include <vector>

using namespace std;

int main(void)
{

    int row, column;
    char char_row, char_column;

    cout << "Enter Row and Column: ";
    cin >> row >> column;
    cout << "Display Row and Column : ";
    cin >> char_row;

    vector<char> vector_column;
    vector<vector<char>> vector_matrix;

    for (int i = 0; i < row; i++)
        vector_matrix[i] = new char[column];

    cout << "Matrix Size : " << row*column << endl;

    // output each array element's value
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            vector_matrix[i][j] = char_row;
        }

    // output each array element's value
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            cout << "vector_matrix[" << i << "][" << j << "]: ";
            cout << vector_matrix[i][j] << endl;
        }
    auto il = {1, 2, 3, 4, 5};
    /* create vector from initializer list */
    vector<int> v(il);

    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << endl;

    vector<char> char_v;
    // char_v = {"Zara", "Hina Ali", "Ali", "Sara Ali"};

    return 0;
}