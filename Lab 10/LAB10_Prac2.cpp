#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int p, i;

    cout << "Enter a positive integer: " ;
    cin >> p ;
    if (p == 2)
        cout << p <<  " is a Prime Number";
    else if (p != 1 && p%2 != 0)
        {
        i = 1;
        while (i <= sqrt(p) )
        {
            if (p%i != 0 )
                cout << p <<  " is a Prime Number";
            else
                cout << p <<  " is NOT a Prime Number";
            i = i + 2 ;
        }
        }
    else
        cout << p <<  " is NOT a Prime Number";

    return 0;
}
