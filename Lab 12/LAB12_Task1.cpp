#include<iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;

    for (int counter = 1;counter <= 10;counter++)
        cout << num << " x " << counter <<  " = " <<  num*counter << endl;
    return 0;
}
