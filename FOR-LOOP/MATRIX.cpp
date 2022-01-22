#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == j)
                cout << "   " << 0;
            else if (i > j)
                cout << "  " << -1;
            else
                cout << "   " << 1;
        }
        cout << endl;
    }
    return 0;
}