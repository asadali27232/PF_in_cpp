#include<iostream>

using namespace std;

int main()
{
    int counter, num, numP, numN, num0, mex, men ;

    num = 0;
    numP = 0;
    numN = 0;
    num0 = 0;
    mex = -222222222222222222220;
    men = 22222222222222222222;
    cout << "Enter Number: ";
    cin >> num;

    while (cin)
    {
        cout << "Enter Number: ";
        cin >> num;
        if (num<0)
            numN++ ;
        if (num>0)
            numP++ ;
        if (num==0)
            num0++ ;
        if (num > mex)
            mex = num ;
        if (num < men)
            men = num ;

    }

    cout << endl << "Number of Positive Integers = " <<numP << endl << "Number of Negative Integers = "
        << numN << endl <<  "Number of Zero Integers = "
        << num0 << endl <<  "Maximum Number Entered = " << mex << endl << "Minimum Number Entered = " << men << endl ;





    return 0;
}
