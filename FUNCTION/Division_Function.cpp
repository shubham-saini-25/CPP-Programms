#include <iostream>
using namespace std;
int division(int a, int b)
{
    return (a / b);
}
int main()
{
    int a, b, c;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    c = division(a, b);
    cout << "The Division is: " << c;
    return 0;
}