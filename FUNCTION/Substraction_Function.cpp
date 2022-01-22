#include <iostream>
using namespace std;
int subs(int a, int b)
{
    return (a - b);
}
int main()
{
    int a, b, c;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    c = subs(a, b);
    cout << "The Substraction is: " << c;
}