#include<iostream>
#include<iomanip>
using namespace std;
const int sizee = 10;
int main()

{
    double arr[sizee] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
    double *nPtr;

    for(int i=0; i<sizee; i++)
        cout << arr[i] << " ";

    cout << endl;

    nPtr = arr;
    nPtr = &arr[0];

    for(int i=0; i<sizee; i++)
        cout << *(nPtr + i) << " ";

    cout << endl;

    for(int i=0; i<sizee; i++)
        cout << *(arr + i) << " ";

    cout << endl;

    for(int i=0; i<sizee; i++)
        cout << nPtr[i] << " ";

    return 0;
}
