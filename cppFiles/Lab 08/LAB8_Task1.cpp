#include<iostream>

using namespace std;

int main ()
{
    int num ;
    cout << "Enter one-digit-number: ";
    cin >> num;

    if (num > 9 )
        cout << "Invalid Number!";
    else if (num == 9)
        cout << "Nine";
    else if (num == 8)
        cout << "Eight";
    else if (num == 7)
        cout << "Seven";
    else if (num == 6)
        cout << "Six";
    else if (num == 5)
        cout << "Five";
    else if (num == 4)
        cout << "Four";
    else if (num == 3)
        cout << "Three";
    else if (num == 2)
        cout << "Two";
    else if (num == 1)
        cout << "One";
    else if (num == 0)
        cout << "Zero";
    else cout << "Invalid Number!";

    return 0;
}
