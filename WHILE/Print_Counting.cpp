#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter the Number where you want to Print Counting: ";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        cout << i;
        cout << endl;
        i += 1;
    }
    return 0;
}