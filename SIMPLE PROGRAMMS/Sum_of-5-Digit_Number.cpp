#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, n , sum;
    cout << "Enter the Number: ";
    cin >> n;
    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n % 10;
    n = n / 10;
    d = n % 10;
    n = n / 10;
    sum = a + b + c + d + n;
    cout << "THe Reverse Number is: " << sum << endl;
    return 0;
}