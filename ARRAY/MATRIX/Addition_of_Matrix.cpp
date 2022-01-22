#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i, j, row, col, a[5][5], b[5][5], c[5][5];
    cout << "Enter no. of Rows: ";
    cin >> row;
    cout << "Enter no. of Columns: ";
    cin >> col;
    cout << "Enter the Element in Matrix A: ";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the Element in Matrix B: ";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "The Addition of Matrix is: " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "    " << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}