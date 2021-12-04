#include<iostream>

using namespace std;

int main()
{
    int num, sumE, sumO;
    sumE = 0;
    sumO = 0;

    while (num > 0)
    {
    cout << "Enter a Number \nEnter negative number to exit!\n" ;
    cin >> num ;

    if ( num%2 == 0)
        sumE = sumE + num ;
    else
        sumO = sumO + num ;
    }
    cout << endl << "Sum of EVEN number = " << sumE << endl << "Sum of ODD numbers = " << sumO << endl ;
    return 0;
}
