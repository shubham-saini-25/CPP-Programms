#include <iostream>
using namespace std;
int main()
{
    int n, Rev = 0, d;
    cout << "Enter the Number: ";
    cin >> n;
    while (n != 0)
    {
        d = n % 10;
        Rev = Rev * 10 + d;
        n = n / 10;
    }
    cout << "The Reverse Number is: " << Rev;
    return 0;
}