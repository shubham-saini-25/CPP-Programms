#include <iostream>
using namespace std;
int main()
{
    char Ch;
    cout << "Enter a Character: ";
    cin >> Ch;
    switch (Ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
    {
        cout << "It's a Vowel Character";
        break;
    }
    default:
        cout << "It's not a Vowel Character";
    }
    return 0;
}