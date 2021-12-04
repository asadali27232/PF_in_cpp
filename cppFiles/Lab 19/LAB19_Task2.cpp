#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[25];
    char str2[25];
    int length;

    strcpy(str1, "Sunny Day");
    length = strlen(str1);
    strcpy(str2, "Asad Ali");

    int x = strcmp(str1,str2);
    if (x==0)
        cout << "Strings are Same" ;
    if (x<0)
        cout << str2;
    if (x>0)
        cout << str1;
    return 0;
}
