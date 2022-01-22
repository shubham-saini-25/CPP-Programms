#include <iostream>
using namespace std;
int main()
//========WithoutUsing 3rd Variable======
{
    int a, b;
    cout << "Swapping of  Variable without using 3rd Variable" << endl;
    cout << "Enter Value of A: ";
    cin >> a;
    cout << "Enter Value of B: ";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After Swapping A is: " << a << endl;
    cout << "After Swapping B is: " << b << endl;
    return 0;
}

//=====Using 3rd Variable===========
// {
//     int a, b, c;
//     cout<<"Swapping of  Variable with using 3rd Variable"<<endl;
//     cout << "Enter Value of A: ";
//     cin >> a;
//     cout << "Enter Value of B: ";
//     cin >> b;
//     c = a;
//     a = b;
//     b = c;
//     cout << "After Swapping A is: " << a << endl;
//     cout << "After Swapping B is: " << b << endl;
//     return 0;
// }
