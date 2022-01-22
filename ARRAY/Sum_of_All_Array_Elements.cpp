#include <iostream>
using namespace std;
int main()
{
    int i, n, a[50], sum = 0;
    cout << "Enter the no.of Integer (less than 50) You want to Insert in the Array: ";
    cin >> n;
    cout << "Enter the Elements in the Array: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    cout << "The Sum is: " << sum;
    return 0;
}
