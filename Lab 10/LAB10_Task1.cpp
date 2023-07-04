#include<iostream>

using namespace std;

int main()
{
    int num;
    int counter = 1;
    cout << "Enter a number:";
    cin >> num;

    while (counter <= 10)
    {
        cout << num << " x " << counter <<  " = " <<  num*counter << endl;
        counter++ ;

    }

    return 0;
}
