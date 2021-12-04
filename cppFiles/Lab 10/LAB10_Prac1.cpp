#include<iostream>
using namespace std;
int main()
{
    int n1, n2;
    int sum = 0;

    cout << "Enter First Number: " ;
    cin >> n1;
    cout << "Enter Second Number: " ;
    cin >> n2;

    cout << "The sum [" ;
    while ( n1 <= n2)
    {
        if (n1%2 != 0)
            n1 = n1 + 1;

        sum = sum + n1;
        cout << n1 ;
        if (n1<n2)
            cout << " + " ;
        n1 = n1 + 2 ;
    }

    cout << "] is: " << sum ;
    return 0;
}
