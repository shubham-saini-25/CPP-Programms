#include <iostream>
using namespace std;
int main()

//   1 to 5

{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

//   5 to 1 

// {
//     int i, j;
//     for (i = 5; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }