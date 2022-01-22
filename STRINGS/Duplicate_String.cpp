#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[] = "Hello World !";
    char *ptr = strdup(str1);
    cout << "The Duplicate String is: " << ptr;
    return 0;
}