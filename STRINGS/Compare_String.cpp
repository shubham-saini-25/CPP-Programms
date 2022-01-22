#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char name1[] = "SHUBHAM";
    char name2[] = "SAINI";
    int cmp = strcmp(name1, name2);
    // If both strings are Same Then Output will be = 0
    // If both strings are Different Then Output will be = 1
    // If both strings are Same But Case-Sensitive Then Output will be = -1
    cout << cmp;
    return 0;
}