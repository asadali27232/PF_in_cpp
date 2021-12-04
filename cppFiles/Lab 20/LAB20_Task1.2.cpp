#include<iostream>
using namespace std;
int main()
{
     int arr[4][5] = {{1,5,2,9,-2},
                      {-5,10,5,66,1},
                      {0,0,56,6,7},
                      {89,-15,-11,0,25}};

    cout << "Last Element of Array: " << arr[3][4] << endl; //i

    arr[2][2] = 37; //ii
    cout << endl << "2nd Row:" << endl;
    cout << arr[2][0] << "  "; //iii
    cout << arr[2][1] << "  "; //iii
    cout << arr[2][2] << "  "; //iii
    cout << arr[2][3] << "  "; //iii
    cout << arr[2][4] << "  "; //iii

    cout << endl << endl << "2nd Row:" << endl;

    for (int col = 0; col<5; col++)           //iv
        cout << arr[2][col] << "    ";        //iv

    cout << endl << endl << "Last Column:" << endl ;

    for (int row = 0; row<4; row++)           //v
        cout << arr[row][4] << endl ;         //v

    cout << endl << endl << "Whole Array:" << endl;

    for (int row = 0; row<4; row++)             //vi
        {                                       //vi
        for (int col = 0; col<5; col++)         //vi
            cout << arr[row][col] << "  " ;     //vi
        cout << endl;
        }

    return 0;
}
