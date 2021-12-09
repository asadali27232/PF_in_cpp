#include <iostream>
#include<cmath>
#include<cstring>
#include<string.h>

using namespace std;

 int main()
 {
     const int SIZE = 10;
     int n[10] = {100, 300, 15, 35, 12, 20, 18, 6, 35, 250};
     char a[SIZE][SIZE] = {"Lahore", "Karachi", "Gujrat", "Pindi", "Kohat", "Peshawar", "Bannu", "Quetta", "Wahndo", "Pindi"};

     int pass;
     int i;
     char hold[30];
     int nhold;

    for ( pass = 0; pass < SIZE-1; pass++ )
    {
        for ( i = 0; i < SIZE - 1; i++ )
        {
            if ( strcmp(a[ i ], a[ i + 1 ] )>0 )
            {
                    strcpy(hold, a[ i ]);
                    strcpy (a[ i ] , a[ i + 1 ]);
                    strcpy (a[ i + 1 ], hold);
                    nhold = n[i];
                    n[i] = n[i+1];
                    n[i+1] = nhold;

            }
        }
    }


    for ( i = 0; i < SIZE; i++ )
        {
            cout << a[i] << "    " << n[i] << endl;
        }
}
