#include <iostream>
using namespace std;
int main()

// PATTERN 1 TO 5

{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}

// // PATTERN 5 TO 1

// {
//     int i, j;

//     for (i = 5; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
//     return 0;
// }