#include <iostream>
using namespace std;
int main()
{
    int P, n, Rev = 0, d;
    cout << "Enter the Number: ";
    cin >> n;
    P = n;
    while (n != 0)
    {
        d = n % 10;
        Rev = Rev * 10 + d;
        n = n / 10;
    }
    if (Rev == P)
        cout << P << " is a PALINDROME Number";
    else
        cout << P << " is Not a PALINDROME Number";
    return 0;
}