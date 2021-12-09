#include <iostream>
#include<cmath>
#include<cstring>
#include<string.h>

using namespace std;

 int main()
 {
     const int SIZE = 10;
     char a[SIZE][SIZE] = {"Lahore", "Karachi", "Gujrat", "Pindi", "Kohat", "Peshawar", "Bannu", "Quetta", "Wahndo", "Pindi"};

     int pass;
     int i;
     char hold[30];

    for ( pass = 0; pass < SIZE-1; pass++ )
    {
        for ( i = 0; i < SIZE - 1; i++ )
        {
            if ( strcmp(a[ i ], a[ i + 1 ] )>0 )
            {
                    strcpy(hold, a[ i ]);
                    strcpy (a[ i ] , a[ i + 1 ]);
                    strcpy (a[ i + 1 ], hold);
            }
        }
    }


    for ( i = 0; i < SIZE; i++ )
        {
            cout << a[i] << " ";
        }
}
