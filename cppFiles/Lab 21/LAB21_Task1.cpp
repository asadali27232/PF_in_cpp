#include<iostream>
#include<iomanip>
using namespace std;
const int MAX_ROW = 10;
const int MAX_COL = 10;
void Copy (const int X[][MAX_COL], int Y[][MAX_COL], int count_row, int count_col);
void Copy (const int X[][MAX_COL], int Y[][MAX_COL], int count_row, int count_col)
{
   for (int row=0; row<count_row; row++)
        for (int col=0; col<count_col; col++)
            Y[row][col] = X[row][col];

}
void Subarray2 (const int X[][MAX_COL], int Y[][MAX_COL], int count_row1, int count_col1, int count_row2, int count_col2);
void SubArray2 (const int X[][MAX_COL], int Y[][MAX_COL], int count_row1, int count_col1, int count_row2, int count_col2)
{
   for (int row=0; row<count_row2; row++)
        for (int col=0; col<count_col2; col++)
            Y[row][col] = X[row][col];

}
int main()
{
    int X1[MAX_ROW][MAX_COL] = {{5,12,17,9,3},{13,4,8,14,1},{9,6,3,7,11}};
    int Y1[MAX_ROW][MAX_COL];

    int count_row1 = 3;
    int count_col1 = 5;

    int count_row2 = 2;
    int count_col2 = 2;

    Copy(X1, Y1, count_row1, count_col1);
    cout << "Copying Array: " << endl;
    for (int row=0; row<count_row1; row++)
        {
        for (int col=0; col<count_col1; col++)
            cout << setw(5) << setfill(' ') << right << Y1[row][col] << "    ";
        cout<< endl;
        }

    cout << endl << endl << endl;

    SubArray2 (X1, Y1, count_row1, count_col1, count_row2, count_col2);
    cout << "Copying Sub-Array: " << endl;
    for (int row=0; row<count_row2; row++)
        {
        for (int col=0; col<count_col2; col++)
            cout << setw(5) << setfill(' ') << right << Y1[row][col] << "    ";
        cout<< endl;
        }





    return 0;
}
