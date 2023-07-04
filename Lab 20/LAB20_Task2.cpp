#include<iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{0}};
    // Input Loop
    for (int row = 0; row<3; row++)
        {
            for (int col = 0; col<3; col++)
            {
                cout << "Enter the Value for A[" << row << "][" << col << "]: ";
                cin >> arr[row][col];
            }
        }
        // Sum Loop
        int sum = 0;

        for (int rowO = 0; rowO<3; rowO++)
            for (int colO = 0; colO<3; colO++)
                sum = sum + arr[rowO][colO];

    cout << "Sum of the elements of 2-D Array is " << sum;


    return 0;
}
