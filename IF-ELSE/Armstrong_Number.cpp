#include <iostream>
using namespace std;
int main()
{
    int P, n, d, sum = 0;
    cout << "Enter the Number: ";
    cin >> n;
    P = n;
    while (n != 0)
    {
        d = n % 10;
        sum = sum + d * d * d;
        n = n / 10;
    }
    if (sum == P)
        cout << P << " is a ARMSTRONG Number";
    else
        cout << P << " is Not a ARMSTRONG Number";
    return 0;
}