#include <iostream>
using namespace std;
int main()
{
    int P, C, M, H, E, Total;
    float PER;
    cout << "Enter Marks of Physics: ";
    cin >> P;
    cout << "Enter Marks of Chemistry: ";
    cin >> C;
    cout << "Enter Marks of Maths: ";
    cin >> M;
    cout << "Enter Marks of Hindi: ";
    cin >> H;
    cout << "Enter Marks of English: ";
    cin >> E;
    Total = P + C + M + H + E;
    cout << "TOTAL = " << Total << endl;
    PER = (float)Total / 5;
    cout << "PERCENTAGE = " << (float)PER << endl;
    if (PER > 60.0)
        cout << "First Division";
    else if (PER > 50.0)
    {
        cout << "Second Division";
    }
    else if (PER > 40.0)
    {
        cout << "Third Division";
    }
    else
        cout << "FAIL";
}