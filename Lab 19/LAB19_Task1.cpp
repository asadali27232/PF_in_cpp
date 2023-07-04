//SP21-BCS-007 Asad Ali
/*****************************************************************************************
LAB19 Task 1
Program Name: Searching an array
Program Purpose: Passing array to function
Problem Statement:
•	An array is initialized with twenty-five numbers using array initializer list.
•	Then, a number is entered through the keyboard by the user, which should be searched in the array.
•	Write down a function, which displays whether the searched number is present in the array or not?
    (Linear search) Decide the required parameters of the function yourself.
•	If the number is present in the array, display the number of times it appears in the array.


HINT: Use a counter (other than the loop counter) to keep track of how many times the number is found.
Increment this counter each time the match is successful.

NOTE: Write this program WITHOUT using the Flag-controlled loop.
*********************************************************************************************/

#include<iostream>
using namespace std;
int linearSearch(const int arr[], int sz, int srch);
int linearSearch(const int arr[], int sz, int srch)
{
    int counter = 0;
    for (int i=0; i<sz; i++)
    {
        if (arr[i]==srch)
            counter++;
    }
  return counter;
}
int main()
{
    const int sz = 25;
    int arr[sz] = {9,6,4,5,8,6,9,8,5,6,9,8,5,6,9,5,6,1,3,4,6,2,1,5,3};
    int srch = 0;

    cout << endl;
    cout << "Array is {";
    for (int i=0; i<sz; i++)
    {
        cout << arr[i];
        if (i!=sz-1)
            cout << ",";
    }
    cout << "}" << endl;

    while(!(srch == -1))
    {
    cout << endl;
    cout << "Enter a Number to Search in Array (Press -1 to Exit): ";
    cin >> srch;
    cout << endl;
    if (srch == -1)
        break;
    int found = 0;
    found = linearSearch(arr, sz, srch);
    if (found==0)
        cout << "   Element " << srch << " is NOT Found in Array.";
    if (found!=0)
        cout << "   Element " << srch << " is Found " << found << " times in Array.";
    cout << endl;
    }
    return 0;
}
