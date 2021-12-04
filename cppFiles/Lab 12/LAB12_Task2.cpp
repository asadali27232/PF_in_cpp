#include<iostream>

using namespace std;

int main()
{
    int num;
    do
    {
        cout << "Enter a number: (2-20) ";
        cin >> num;
    } while (!(num<=20 && num>=2));

    for (int counter = 1;counter <= 10;counter++)
        cout << num << " x " << counter <<  " = " <<  num*counter << endl;
    return 0;
}
