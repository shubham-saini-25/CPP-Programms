#include <iostream>
using namespace std;
int main()
{
    int n, Fact = 1,i=1;
    cout << "Enter a Number: ";
    cin >> n;
    do
    {
        Fact = Fact * i;
        i++;
    } while (i<=n);
    cout << "The Factorial of " << n << " is " << Fact;
    return 0;
}