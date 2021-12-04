#include<iostream>
using namespace std;
int main()
{
    int N, T , i , k ;
    do
    {
        cout << "Enter N: ";
        cin >> N;
    } while (N<2);

    for (k=1; k<=N; k++)
    {
        do
        {
            cout << "Enter T: ";
            cin >> T;
        } while (T<=1);
        for (i=1; i<=5; i++)
        {
            cout << T << " X "  << i << " = " << T*i << "    " ;
        }
        cout << endl;
    }
    return 0;
}
