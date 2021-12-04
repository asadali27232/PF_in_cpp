/****************************************************************************************************************
Lab17_Task1
Program Name: Copy array in reverse
Program Purpose: Using array
Problem Statement: Write a program to copy the contents of one array into another in the reverse order.
The program should work for arrays of any size. (HINT: use a loop to copy elements of first array into the second.)
Steps:
Declare another array of same size
Copy last element of arr1 in first element of arr2, second last of arr1 into second of arr2 and so on…
arr2[0] = arr[4]
arr2[1] = arr[3]
arr2[2] = arr[2]
arr2[3] = arr[1]
arr2[4] = arr[0]

HINT: there will be 2 counters in the loop. One increasing and other decreasing.
*************************************************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    const int SIZE = 5;
    int arr1[SIZE] = {1,2,3,4,5};
    int arr2[SIZE];

    for (int i=0 ; i<SIZE ; i++)
        arr2[i] = arr1[SIZE -1 - i];

    cout << endl << "Array 1 = ";
    for (int j=0 ; j<SIZE ; j++)
        cout << arr1[j] << " " ;

    cout << endl <<"Array 2 = " ;
    for (int k=0 ; k<SIZE ; k++)
       cout << arr2[k] << " ";
    cout << endl;
    return 0;
}
