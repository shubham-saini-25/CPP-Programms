#include <iostream>
using namespace std;
int main()
{
    int Year;
    cout << "Enter a Year: ";
    cin >> Year;
    if (Year % 4 == 0)
    {
        if (Year % 100 == 0)
        {
            if (Year % 400 == 0)
                cout << "LEAP YEAR";
            else
                cout << "NOT LEAP YEAR";
        }
        else
            cout << "LEAP YEAR";
    }
    else
        cout << "NOT LEAP YEAR";
}