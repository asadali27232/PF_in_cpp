#include<iostream>
using namespace std;
int main()
{
    int num, div;
    bool is_prime;
    is_prime = true;

    while (is_prime)
    {
        cout << "Enter a Positive Integer: " ;
        cin >> num ;
        div = 2;
        while (div < num)
        {
            if (num%div != 0)
            {
                cout << "Number is Prime" << endl;
                is_prime = false ;
            }
            else if (num%div == 0)
            {
                cout << "Number is NOT Prime" << endl;
            }
            div = div + 1;
        }

    }

    return 0;
}
