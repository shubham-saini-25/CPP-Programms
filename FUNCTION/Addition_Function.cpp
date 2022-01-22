#include <iostream>
using namespace std;
int add(int a, int b)
{
    return (a + b);
}
int main()
{
    int a, b, c;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    c = add(a, b);
    cout << "The Addition of Two Number is: " << c;
    return 0;
}