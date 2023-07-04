/**************************************************************************************************************
LAB18 Task 2
Program Name: Two Arrays sum
Program Purpose: Array
anipulation and passing to functions
Problem Background:
Input Array formal parameter: The array is provided only as input to the function and the function is not intended
to change the array. In this case, a ‘const’ keyword is used with the array parameter.
Output Array formal parameter: In this case, the function is intended to change the array. In this case, no ‘const’
keyword is used with the array parameter.

Problem Statement:
Write a function called sumArrays, which receives 2 input arrays and an output array along with their sizes as formal
parameters. The function prototype might look like the following:
void sumArrays(const int arr1[], int sz1, const int arr2[], int sz2, int arrSum[], int sz3);
The function should add the corresponding elements of arr1 and arr2 and store it into the corresponding element
of arrSum.
 (Hint: You need to run a single loop for this task. Nested loop is NOT needed.)
***************************************************************************************************************/
#include<iostream>
using namespace std;
void sumArrays(const int arr1[], const int arr2[], int arrSum[], int sz);
void sumArrays(const int arr1[], const int arr2[], int arrSum[], int sz)
{
    for (int i=0; i<sz; i++)
    {
        arrSum[i] = arr1[i] + arr2[i];
    }
}
int main()
{
    int sizee = 0;
    cout << "Enter Size of Array: ";
    cin >> sizee;
    const int sz = sizee;
    int arr1[sz];
    int arr2[sz];
    int arrSum[sz];
    cout << endl;
    for (int i = 0; i<sz; i++)
    {
        cout << "Enter Element " << i+1 << " of Array 1: ";
        cin >> arr1[i];
    }
    cout << endl ;
    for (int i = 0; i<sz; i++)
    {
        cout << "Enter Element " << i+1 << " of Array 2: ";
        cin >> arr2[i];
    }

    sumArrays(arr1, arr2, arrSum, sz);

    cout<< endl;
    cout << "Given Arrays are:" << endl;
    cout << "Array 1 = {";
    for (int i=0; i<sz; i++)
    {
        cout << arr1[i];
        if (i!=sz-1)
            cout << ",";
    }
    cout << "}" << endl;
    cout << "Array 2 = {";
    for (int i=0; i<sz; i++)
    {
        cout << arr2[i];
        if (i!=sz-1)
            cout << ",";
    }
    cout << "}" << endl << endl;
    cout << "SUM of Arrays = {";
    for (int i=0; i<sz; i++)
    {
        cout << arrSum[i];
        if (i!=sz-1)
            cout << ",";
    }
    cout << "}" << endl;
    return 0;
}
