/****************************************************************************************************
LAB Task 1
Program Name: Array Palindrome
Program Purpose: Array manipulation and passing to functions
Problem Background:
A palindrome is a sequence of elements, which, when reversed, produces the exact same sequence of elements.
E.g. {1, 2, 3, 2, 1} and {5, 9, 20, 20, 9, 5} are palindromes. But, {1, 2, 3, 4, 5} is not a palindrome.

Problem Statement:
If an array arr contains n elements, then write a function to check if the array is a palindrome or not.
i.e. arr[0] = arr[n-1], arr[1] = arr[n-2] and so on. The function prototype is given below:
bool isPalindrome(int arr[], int sz);
For example an array {5, 8, 0, -1, 0, 8, 5} is a palindrome, but {3, 4, 9, 1, 9, 5, 4} is not.

Hint 1: Inside the function, you will need 2 counters; one in increasing order and the other in the decreasing order.
Hint 2: you might need a flag-controlled loop to correctly implement this program.
**********************************************************************************************************/
#include<iostream>
using namespace std;

bool isPalindrome (int arr[], int sz);

bool isPalindrome (int arr[], int sz)
{
    bool isPal = true;
    int szr = sz;
    for (int i=0; i<sz; i++)
    {
        if (arr[i] == arr[szr-1])
            isPal = true;
        if (arr[i] != arr[szr-1])
            return false;
        szr-- ;
    }
    return isPal;
}
int main()
{
    int sizee = 0;
    cout << "Enter Size of Array: ";
    cin >> sizee;
    const int sz = sizee;
    int arr[sz];
    for (int i = 0; i<sz; i++)
    {
        cout << "Enter Element " << i+1 << " of Array: ";
        cin >> arr[i];
    }
    if (isPalindrome(arr, sz)== 1)
    {
        cout << endl;
        cout << "Array = {";
        for (int i=0; i<sz; i++)
        {
            cout << arr[i];
            if (i!=sz-1)
                cout << "," ;
        }
        cout << "} is a Palindrome!";
        cout << endl;
    }
    if (isPalindrome(arr,sz)== 0)
    {
        cout << endl;
        cout << "Array = {";
        for (int i=0; i<sz; i++)
        {
            cout << arr[i];
            if (i!=sz-1)
                cout << "," ;
        }
        cout << "} is NOT a Palindrome!";
        cout << endl;
    }
    return 0;
}
