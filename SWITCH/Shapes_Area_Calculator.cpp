#include <iostream>
using namespace std;
int main()
{
    int RectangleArea, TriangleArea, SquareArea, CicleArea, Length, Width, Base, Height, Side, Radius, Area;
    cout << endl;
    cout << "          1-Area of Ractangle          "
         << "          2-Area of Triangle          "
         << "          3-Area of Square          "
         << "          4-Area of Circle          " << endl;
    cout << endl;
    cout << "Enter Your Choice Shape Which You want to Calculate it's Area: ";
    cin >> Area;
    cout << endl;
    switch (Area)
    {
    case 1:
    {
        cout << "Enter the Length: ";
        cin >> Length;
        cout << "Enter the Width: ";
        cin >> Width;
        cout << endl;
        RectangleArea = Length * Width;
        cout << "The Area of Rectangle is: " << RectangleArea;
        cout << endl;
        break;
    }
    case 2:
    {
        cout << "Enter the Height: ";
        cin >> Height;
        cout << "Enter the Base: ";
        cin >> Base;
        cout << endl;
        TriangleArea = Height * Base;
        cout << "The Area of Triangle is: " << TriangleArea;
        cout << endl;
        break;
    }
    case 3:
    {
        cout << "Enter the Side: ";
        cin >> Side;
        cout << endl;
        SquareArea = Side * Side;
        cout << "The Area of Square is: " << SquareArea;
        cout << endl;
        break;
    }
    case 4:
    {
        cout << "Enter the Radius: ";
        cin >> Radius;
        cout << endl;
        CicleArea = Radius * 3.14 * 3.14;
        cout << "The Area of Cicle is: " << CicleArea;
        cout << endl;
        break;
    }
    default:
        cout << "Invalid Choice";
    }
    cout << endl;
    return 0;
}