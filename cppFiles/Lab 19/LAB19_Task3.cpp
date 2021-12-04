#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char space[50] = "This is a Fine Cup of Tea";
    char noSpace[50]= "";
    int len = strlen(space);
    int j=0;
    for (int i=0 ; i<len; i++)
    {
        if (space[i]!=' ')
        {
            noSpace[j] = space[i];
            j++;
        }

    }
    noSpace[j] = '\0';

    cout << noSpace;
    return 0;
}
