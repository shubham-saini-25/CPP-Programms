#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c;
    float Avg;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    cout << "Enter Third Number: ";
    cin >> c;
    Avg = (a + b + c) / 3;
    cout << "The Average of 3 Numbers is: " << Avg;
    return 0;
}