#include <iostream>
using namespace std;
int main()
{
    float ht;
    cout << "Enter Height: ";
    cin >> ht;
    if (ht < 150.0)
        cout << "Dwarf";
    else if ((ht >= 150.0)&&(ht<155.0))
    {
        cout << "Average";
    }
    else if ((ht>=155.0)&&(ht<195.0))
    {
        cout<<"Taller";
    }
    else
        cout<<"Abnormal";
}