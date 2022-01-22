#include <iostream>
using namespace std;
int mul(int a, int b)
{
    return (a * b);
}
int main()
{
    int a, b, c;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    c = mul(a, b);
    cout << "The Multiplication is: " << c;
    return 0;
}