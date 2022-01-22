#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if (n > 0)
        cout << "This is a Positive Number.";
    else if (n < 0)
        cout << "This is a Negative Number.";
    else
        cout << "This is Zero.";
    return 0;
}