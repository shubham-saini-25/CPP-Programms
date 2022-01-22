#include <iostream>
using namespace std;
int main()
{
    float Si, P, R , T;
    cout << "Enter Principle: ";
    cin >> P;
    cout << "Enter Rate of Interest: ";
    cin >> R;
    cout << "Enter Time: ";
    cin >> T;
    Si = (P * R * T) / 100;
    cout << "The Simple interest is: " << Si;
    return 0;
}