#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i, j, row, col, a[5][5], b[5][5], c[5][5];
    cout << "Enter no. of Rows: ";
    cin >> row;
    cout << "Enter no. of Colums: ";
    cin >> col;
    cout << "Enter the Element in Matrix: ";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    cout << "The Transpose is: " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "    " << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}