#include <iostream>
using namespace std;
int main()
{
    int Number, Table, i;
    cout << "Enter the Number: ";
    cin >> Number;
    for (i = 1; i <= 10; i++)
    {
        Table = Number * i;
        cout << Number << " x " << i << " = " << Table << endl;
    }
    return 0;
}