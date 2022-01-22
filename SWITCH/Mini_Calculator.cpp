#include <iostream>
using namespace std;
int main()
{
    int a, b, c, Cal;
    cout << endl;
    cout << "          1-Addition          "
         << "          2-Substraction         "
         << "          3-Multiplication          "
         << "          4-Division          " << endl;
    cout << endl;
    cout << "Enter First  Number: ";
    cin >> a;
    cout << "Enter Second  Number: ";
    cin >> b;
    cout << endl;
    cout << "Enter the Arthmetic Operation Which You want to Calculate: ";
    cin >> Cal;
    cout << endl;
    switch (Cal)
    {
    case 1:
    {
        c = a + b;
        cout << "The Addtion of " << a << " and " << b << " is: " << c;
        cout << endl;
        break;
    }
    case 2:
    {
        c = a - b;
        cout << "The Substraction of " << a << " and " << b << " is: " << c;
        cout << endl;
        break;
    }
    case 3:
    {
        c = a * b;
        cout << "The Multiplication of " << a << " and " << b << " is: " << c;
        cout << endl;
        break;
    }
    case 4:
    {
        c = a / b;
        cout << "The Division of " << a << " and " << b << " is: " << c;
        cout << endl;
        break;
    }
    default:
        cout << "Invalid Choice";
    }
    cout << endl;
    return 0;
}