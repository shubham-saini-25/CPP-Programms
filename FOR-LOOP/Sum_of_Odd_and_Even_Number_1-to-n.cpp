#include <iostream>
using namespace std;
int main()
{
    int i, n, Odd = 0, Even = 0;
    cout << "Enter the Number: ";
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            Even = Even + i;
        else
            Odd = Odd + i;
    }
    cout << "Sum of Even Number is: " << Even<<endl;
    cout << "Sum of Odd Number is: " << Odd ;
}