#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double m, n, side1, side2, hype;
    cout << " Enter the Value of 'm': ";
    cin >> m;
    cout << " Enter the Value of 'n': ";
    cin >> n;

    side1 = m*m - n*n;
    side2 = 2*n*m;
    hype = m*m + n*n;

    cout << " Side1 = " << side1 << endl;
    cout << " Side2 = " << side2 << endl;
    cout << " Hypotenuse  = " << hype << endl;

    return 0;
}
