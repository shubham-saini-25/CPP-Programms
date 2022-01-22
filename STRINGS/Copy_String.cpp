#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char name1[] = "SHUBHAM";
    char name2[] = "SAINI";
    cout << "Before Copy String is: " << name1 << endl;
    strcpy(name1, name2);
    cout << "After Copy String is: " << name1;
    return 0;
}