#include <iostream>
using namespace std;
int main()  
{
    int i, n, a[10], sum = 0;
    float Avg;
    cout << "Enter the Numbers of Students: ";
    cin >> n;
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < 10; i++)
    {
        sum = sum + a[i];
        Avg = (float)sum / 5;
    }
    cout << "The Average of Marks is: " << Avg;
    return 0;
}