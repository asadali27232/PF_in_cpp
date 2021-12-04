#include<iostream>

using namespace std;

int main()
{
    int num, sumE, sumO;
    sumE = 0;
    sumO = 0;
    num = 1;

    cout << "Enter a Number: " ;
    cin >> num ;

    while (cin)
    {
    if ( num%2 == 0)
        sumE = sumE + num ;
    if ( num%2 != 0)
        sumO = sumO + num ;
    cout << "Enter a Number: " ;
    cin >> num ;
    }
    cout << endl << "Sum of EVEN number = " << sumE << endl << "Sum of ODD numbers = " << sumO << endl ;
    return 0;
}
